/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:18:58 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:19:00 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

    std::string input;
    Harl        harl;
	int			error;
	std::string	aux;

	aux = "\0";
	error = 0;
    while (input.compare("exit") && error != 20)
    {
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
		if (aux == input)
			error++;
		else
			error = 0;
		aux = input;
    }

    return EXIT_SUCCESS;
}
