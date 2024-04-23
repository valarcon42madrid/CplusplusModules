/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:17:53 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:17:55 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Reader.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
		std::cout << "error: Invalid number of arguments." << std::endl;
	else
	{
		try
		{
			Sed::replace(argv[1], argv[2], argv[3]);
		}
		catch(char const *e)
		{
			std::cerr << "Replace error: " << e << std::endl;
		}
	}
	return (0);
}
