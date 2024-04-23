/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:08:01 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/14 12:33:26 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <string>

int main( int ac, char ** av )
{
    if ( ac != 2 )
	{
		std::cout << "\033[93mPlease, add a second argument to represent the int number to search: (...) \033[0m" << std::endl;
        return EXIT_FAILURE;
	}

    int                 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int                 ar2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    std::vector< int >      vect( arr, arr + sizeof( arr ) / sizeof( int ) );
    std::list< int >        list( ar2, ar2 + sizeof( ar2 ) / sizeof( int ) );

	std::cout << std::endl << "The int-number " << atoi(av[1]) << ": " << std::endl;

	std::cout << std::endl << "AT CONTAINER FROM 1 TO 10: ";
    easyfind( vect, std::atoi( av[1] ));

	std::cout << std::endl << "AT CONTAINER FROM 2 TO 20: ";
    easyfind( list, std::atoi( av[1] ));

	std::cout << std::endl;

    return EXIT_SUCCESS;
}
