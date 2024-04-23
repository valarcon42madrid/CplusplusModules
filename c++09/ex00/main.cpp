/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:05:04 by valarcon          #+#    #+#             */
/*   Updated: 2023/04/18 12:05:07 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cerr << "Error: Too much arguments." << std::endl;
		exit(1);
	}
	BitcoinExchange bit;
	bit.rateCalculator(argv[1]);
}
