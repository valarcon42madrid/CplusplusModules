/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:05:02 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/11 12:05:10 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

class Converter
{
private:
    Converter();
	std::string str;
    int type;

    int status[4];
    int ivalue;
    float fvalue;
    double dvalue;
    char cvalue;

    void parse(void);

    void convert(void);
    void fromInt(void);
    void fromFloat(void);
    void fromDouble(void);
    void fromChar(void);

    void setFlag(int status, int flag);

    enum Type {
        TypeChar,
        TypeInt,
        TypeFloat,
        TypeDouble,
        TypeLong,
        TypeInvalid
    };

	public:
    Converter(std::string const &value);
    Converter(Converter const &other);
    virtual ~Converter();

    static const int isImpossible = 0x00000001;
    static const int nonDisplayable = 0x00000010;

	Converter &operator=(Converter const &other);

    bool floatIsValue(void) const;
    bool doubleIsValue(void) const;
    bool hasFlag(int status, int flag) const;

    int getAsInt(void) const;
    float getAsFloat(void) const;
    double getAsDouble(void) const;
    char getAsChar(void) const;
    std::string const &getRaw(void) const;
};

std::ostream &operator<<(std::ostream &out, Converter const &pr);

#endif
