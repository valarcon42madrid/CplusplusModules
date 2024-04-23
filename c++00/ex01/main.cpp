/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:56:52 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/10 12:56:56 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Anuario.hpp"
#include <stdio.h>

int	main(void)
{
	Agenda anu;
	bool work;
	std::string command;
	int	aux;
	int	ax;
	int xua;

	xua = 0;
	ax = 0;
	aux = 0;
	anu.init();
	work = true;
	while (work)
	{
		std::cout << " - ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			anu.add_contact();
			aux = 0;
			xua = 0;
			if (ax < 38)
				ax++;
			else
			{
				std::cout << "\n Bye!\n";
                break;
			}

		}
		else if (command == "SEARCH")
		{
			anu.search_contact();
			if (xua != 14)
				xua++;
			else
			{
				           std::cout << "\n Bye!\n";
                break;
			}
			aux = 0;
			ax = 0;
		}
		else if (command == "EXIT")
			work = false;
		else if (command[command.length() - 1] || command[command.length()])
		{
			ax = 0;
			aux = 0;
			xua = 0;
		}
		else
		{
			std::cin.clear();
			ax = 0;
			xua = 0;
			if (aux < 52)
				aux++;
			else if (aux == 52)
			{
				std::cout << "\n Bye!\n";
				break;
			}
		}
	}
	return (0);
}
