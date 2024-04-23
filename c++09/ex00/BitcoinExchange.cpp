/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:04:42 by valarcon          #+#    #+#             */
/*   Updated: 2023/09/30 19:11:27 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::string line;
	char *ptr;
	float rate;
	int compare;

	this->curr_day = 0;
	this->curr_month = 0;
	this->curr_year = 0;
	this->ifs.open("data.csv", std::ifstream::in);
	if (!this->ifs.is_open())
		std::cout << "File could not open!" << std::endl;

	std::getline(this->ifs, line);

	while(std::getline(this->ifs, line))
	{
		ptr = strtok((char *)(line.c_str()), "-,");
		this->curr_year = atoi(ptr);
		this->curr_month = atoi(strtok(NULL, "-,"));
		this->curr_day = atoi(strtok(NULL, "-,"));
		rate = atof(strtok(NULL, "-,"));

		compare = this->curr_year * 1000000 + this->curr_month * 100 + this->curr_day;
		this->map.insert(std::pair<int, float>(compare, rate));
	}
}

BitcoinExchange::~BitcoinExchange()
{
	this->ifs.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

BitcoinExchange BitcoinExchange::operator = (BitcoinExchange const&)
{
	return (*this);
}

void BitcoinExchange::rateCalculator(char *filename)
{
	std::ifstream ifn;
	std::string line;
	std::string temp;
	char *aux;
	char *ptr;
	float rate;
	int compare;
	int compare2;
	this->curr_day = 0;
	this->curr_month = 0;
	this->curr_year = 0;
	int	done;

	compare2 = 0;
	ifn.open(filename, std::ifstream::in);
	if (!ifn.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		return;
	}

	std::getline(ifn, line);
	while(std::getline(ifn, line))
	{
		if (!strchr(line.c_str(), '|') || !strchr(line.c_str(), '-'))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		temp = line;

		ptr = strtok((char *)(line.c_str()), "-|");
		 if (ptr)
            this->curr_year = atoi(ptr);
        else
        {
             std::cout << "Error: invalid input => " << temp << std::endl;
            continue;
        }
		if (this->curr_year < 2008 || this->curr_year > 2023)
		{
			std::cout << "Error: invalid year => " << temp << std::endl;
			continue;
		}
        ptr = strtok(NULL, "-|");
        if (ptr)
            this->curr_month = atoi(ptr);
        else
        {
             std::cout << "Error: invalid input " << temp << std::endl;
            continue;
        }

		if (this->curr_month < 1 || this->curr_month > 12)
		{
			std::cout << "Error: invalid month => " << temp << std::endl;
			continue;
		}
 		ptr = strtok(NULL, "-|");
        if (ptr)
            this->curr_day = atoi(ptr);
        else
        {
             std::cout << "Error: invalid input " << temp << std::endl;
            continue;
        }

		if (this->curr_day  < 1 || this->curr_day  > 31 || (this->curr_day > 30 && (this->curr_month == 4 || this->curr_month == 6 || this->curr_month == 9 || this->curr_month == 11)) || ((this->curr_month == 2) && (this->curr_day > 29 || (this->curr_day > 28 && (this->curr_year != 2012 && this->curr_year != 2016 && this->curr_year != 2020)))))
		{
			std::cout << "Error: invalid day => " << temp << std::endl;
			continue;
		}
		aux = strtok(NULL, "|");
		if (aux != NULL)
			rate = atof((const char *)aux);
		else
		{
            std::cout << "Error: not a number or value." << std::endl;
            continue;
        }

		if (rate < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		else if (rate > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		compare = this->curr_year * 1000000 + this->curr_month * 100 + this->curr_day;
		for (std::map<int, float>::iterator it = this->map.begin(); it != map.end(); it++)
		{
			if (it->first == compare)
			{
				std::cout << temp.substr(0, 10) << " => " << temp.substr(13, temp.size() - 13) << " = " << it->second * rate << std::endl;
				done = -1;
				break;
			}
			else if (it->first > compare)
			{
				 std::cout << temp.substr(0, 10) << " => " << temp.substr(13, temp.size() - 13) << " = " << it->second * rate << std::endl;
				 done = -1;
				break;
			}
			else if (it->first < compare && compare2 < it->first)
			{
				compare2 = it->first;
				done = it->second;
			}
		}
		if (done != -1)
			std::cout << temp.substr(0, 10) << " => " << temp.substr(13, temp.size() - 13) << " = " << done * rate << std::endl;
	}
	ifn.close();
}
