/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:03:50 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/14 13:50:36 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
    std::cout << std::endl;

    Span sp = Span( 5 );

    sp.addNumber( 2 );
    sp.addNumber( 3 );
    sp.addNumber( 5 );
    sp.addNumber( 7 );
    sp.addNumber( 11 );

    std::cout << "AT PRIME NUMBER'S GROUP (from 2 to 11): " << sp << std::endl << std::endl;

    std::cout << "The longestSpan is: " << sp.longestSpan() << std::endl;
    std::cout << "The shortestSpan is: " << sp.shortestSpan() << std::endl;

    try {
        std::list<int>    l( 10000 );
        std::srand( time ( NULL ) );
        std::generate( l.begin(), l.end(), std::rand );

        Span span( l.size() );

        span.addNumber( l.begin(), l.end() );

		std::cout << "\nAT RANDOM NUMBER'S GROUP (from "<< *std::min_element( span.getList()->begin(), span.getList()->end() ) << " to " << *std::max_element( span.getList()->begin(), span.getList()->end() ) << ")" << std::endl << std::endl;

        std::cout << "The longest span is: " << span.longestSpan() << std::endl;
        std::cout << "The shortest span is: " << span.shortestSpan() << std::endl;
	std::cout << std::endl;
    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl;
    }

	std::cout << "NOW LET'S TRY SOME MISTAKES:" << std::endl << std::endl << "Adding to many numbers :" << std::endl;
	try {
			sp.addNumber( 33 );
			sp.addNumber( 33 );
	}
	catch ( std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "And searching at an pseudo-empty group: " << std::endl;
	Span sbad = Span( 5 );
	sbad.addNumber( 2 );
	try {
	std::cout << sbad.longestSpan() << std::endl;
	}
	catch ( std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

    return EXIT_SUCCESS;
}
