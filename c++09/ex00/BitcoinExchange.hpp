/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:04:50 by valarcon          #+#    #+#             */
/*   Updated: 2023/04/18 12:04:52 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <ctime>
#include "string.h"
#include <cstdlib>
#include <iomanip>
#include <map>

class BitcoinExchange
{
	public:
		int curr_year;
		int curr_month;
		int curr_day;
		
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange operator = (const BitcoinExchange& copy);
		~BitcoinExchange();

		void rateCalculator(char *filename);

		std::map<int, float> map;
		std::ifstream ifs;
};

#endif
