/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:54 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/11 12:04:56 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(std::string const &value):
	str(value), type(TypeInvalid)
{
	for (int i = 0; i < 4; i++)
		this->status[i] = 0;
	this->parse();
	if (this->type != TypeInvalid)
	{
		this->convert();
		if (this->hasFlag(TypeInt, this->isImpossible) || this->ivalue > 127 || this->ivalue < 0)
			this->setFlag(TypeChar, this->isImpossible);
		if (!std::isprint(this->cvalue))
			this->setFlag(TypeChar, this->nonDisplayable);
	}
	else
	{
		this->setFlag(TypeInt, this->isImpossible);
        this->setFlag(TypeFloat, this->isImpossible);
        this->setFlag(TypeDouble, this->isImpossible);
        this->setFlag(TypeChar, this->isImpossible);
	}
}

Converter::Converter(Converter const &other):
	str(other.str), type(other.type), ivalue(other.ivalue), fvalue(other.fvalue), dvalue(other.dvalue), cvalue(other.cvalue)
{
	for (int i = 0; i < 4; i++)
		this->status[i] = other.status[i];
}

Converter::~Converter()
{
}

void Converter::parse(void)
{
	std::stringstream s;
	size_t length = this->str.length();
	size_t i = 0;

	if (length == 1 && !std::isdigit(this->str[0]))
	{
		this->type = TypeChar;
		this->cvalue = this->str[0];
		return;
	}
	if (this->str[0] == '+' || this->str[0] == '-')
		s << str[i++];
	this->type = TypeInt;
	for ( ; i < length; i++)
	{
		if (this->str[i] == '.' && this->type != TypeDouble)
		{
			this->type = TypeDouble;
			s << str[i];
		}
		else if (this->str[i] == 'e' && i < length - 1 && (this->str[i + 1] == '-' || this->str[i + 1] == '+' || std::isdigit(this->str[i + 1])))
			{
            s << str[i] << str[i + 1];
            i++;
            this->type = TypeDouble;
        }
        else if (this->str[i] == 'f' && i == length - 1 && this->type == TypeDouble)
            this->type = TypeFloat;
        else if (!std::isdigit(this->str[i]))
        {
            this->type = TypeInvalid;
            i = length;
        }
        else
            s << str[i];
	}
	 if (this->type == TypeFloat)
        s >> this->fvalue;
    else if (this->type == TypeDouble)
        s >> this->dvalue;
    else if (this->type == TypeInt)
    {
        long lvalue;
        s >> lvalue;
        this->ivalue = lvalue;
        if (s.fail()
            || lvalue > std::numeric_limits<int>::max()
            || lvalue < std::numeric_limits<int>::min())
            this->type = TypeInvalid;
    }
    else if (this->type == TypeInvalid)
    {
        if (this->str == "inff" || this->str == "-inff" || this->str == "+inff"
            || this->str == "nanf")
        {
            this->fvalue = atof(this->str.c_str());
            this->type = TypeFloat;
        }
        else if (this->str == "inf" ||  this->str == "-inf" || this->str == "+inf"
                || this->str == "nan")
        {
            this->dvalue = atof(this->str.c_str());
            this->type = TypeDouble;
        }
    }
}

void Converter::convert(void)
{
    switch (this->type)
    {
    case TypeInt:
        this->fromInt();
        break;
    case TypeFloat:
        this->fromFloat();
        break;
    case TypeDouble:
        this->fromDouble();
        break;
    case TypeChar:
        this->fromChar();
        break;
    }
}

void Converter::fromInt(void)
{
    this->fvalue = static_cast<float>(this->ivalue);
    this->dvalue = static_cast<double>(this->ivalue);
    this->cvalue = static_cast<char>(this->ivalue);
}

bool Converter::floatIsValue(void) const
{
    return (!(std::isnan(this->fvalue) || std::isinf(this->fvalue)));
}

bool Converter::doubleIsValue(void) const
{
    return (!(std::isnan(this->dvalue) || std::isinf(this->dvalue)));
}

void Converter::fromFloat(void)
{
    this->ivalue = static_cast<int>(this->fvalue);
    this->dvalue = static_cast<double>(this->fvalue);
    this->cvalue = static_cast<char>(this->fvalue);
    if (!this->floatIsValue()
        || this->fvalue > std::numeric_limits<int>::max()
        || this->fvalue < std::numeric_limits<int>::min())
        this->setFlag(TypeInt, this->isImpossible);
}

void Converter::fromDouble(void)
{
    this->ivalue = static_cast<int>(this->dvalue);
    this->fvalue = static_cast<float>(this->dvalue);
    this->cvalue = static_cast<char>(this->dvalue);
    if (!this->doubleIsValue()
        || this->dvalue > std::numeric_limits<int>::max()
        || this->dvalue < std::numeric_limits<int>::min())
        this->setFlag(TypeInt, this->isImpossible);
}

void Converter::fromChar(void)
{
    this->ivalue = static_cast<int>(this->cvalue);
    this->fvalue = static_cast<float>(this->cvalue);
    this->dvalue = static_cast<double>(this->cvalue);
}

void Converter::setFlag(int status, int flag)
{
    this->status[status] |= flag;
}

bool Converter::hasFlag(int status, int flag) const
{
    return (this->status[status] & flag);
}

Converter &Converter::operator=(Converter const &other)
{
    this->str = other.str;
    this->type = other.type;
    for (int i = 0; i < 4; i++)
        this->status[i] = other.status[i];
    this->ivalue = other.ivalue;
    this->fvalue = other.fvalue;
    this->dvalue = other.dvalue;
    this->cvalue = other.cvalue;
    return (*this);
}

int Converter::getAsInt(void) const
{
    return (this->ivalue);
}

float Converter::getAsFloat(void) const
{
    return (this->fvalue);
}

double Converter::getAsDouble(void) const
{
    return (this->dvalue);
}

char Converter::getAsChar(void) const
{
    return (this->cvalue);
}

std::string const &Converter::getRaw(void) const
{
    return (this->str);
}

std::ostream &operator<<(std::ostream &out, Converter const &pr)
{
    std::stringstream s;
    std::string tmp;

    if (pr.hasFlag(0, Converter::isImpossible))
        s << "char: impossible" << '\n';
    else if (pr.hasFlag(0, Converter::nonDisplayable))
        s << "char: Non displayable" << '\n';
    else
        s << "char: '" << pr.getAsChar() << "'\n";

    if (pr.hasFlag(1, Converter::isImpossible))
        s << "int: impossible" << '\n';
    else
        s << "int: " << pr.getAsInt() << '\n';
    out << s.str();
    s.str(std::string());
    s.clear();

    if (pr.hasFlag(2, Converter::isImpossible))
        s << "float: impossible" << '\n';
    else
    {
        s << "float: " << std::setprecision(7) << pr.getAsFloat();
        tmp = s.str();
        if (pr.floatIsValue() && tmp.find('.') == std::string::npos)
            s << ".0";
        s << "f\n";
    }
    out << s.str();
    s.str(std::string());
    s.clear();

	 if (pr.hasFlag(3,  Converter::isImpossible))
        s << "double: impossible";
    else
    {
        s << "double: " << std::setprecision(15) << pr.getAsDouble();
        tmp = s.str();
        if (pr.doubleIsValue() && tmp.find('.') == std::string::npos)
            s << ".0";
    }
    out << s.str() << std::endl;
    return (out);
}
