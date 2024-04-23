/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:53:24 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/13 10:56:10 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;

	std::cout << std::endl;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;

	std::cout << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
    swap(c, d);
	std::cout << std::endl;
	std::cout << "swap between c and d." << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
	std::cout << std::endl;
    return 0;
}
