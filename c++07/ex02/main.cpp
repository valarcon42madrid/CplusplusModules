/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:01:29 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/13 12:01:48 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 10

int main( void )
{

    Array< float > test;

    int *a = new int();
    std::cout << std::endl;
    std::cout << "    SUBJECT'S TIP: " << std::endl << std::endl << "New int() address: " << a << " info inside: " << *a << std::endl;
    Array< int > intArray( SIZE );
    Array< int > intArray2( SIZE - 5 );

    for ( unsigned int i = 0; i < intArray.size(); i++ )
        intArray[i] = i * 2;
    for ( unsigned int i = 0; i < intArray2.size(); i++ )
        intArray2[i] = i * 3;

    std::cout << std::endl;
    std::cout << "    NOW TWO ARRAYS WHERE CREATED: " << std::endl;
    std::cout << std::endl;
    std::cout << "Int Array 1: " << intArray << std::endl;
     std::cout << "int Array 2: " << intArray2 << "                   SIZE: " << intArray2.size() << std::endl;

     std::cout << std::endl;
     std::cout << "    SECOND ARRAY BECOMES A COPY OF FIRST, AND THE THIRD VALUE WAS MODIFIED (at the second array): " << std::endl;
     intArray2 = intArray;

	    intArray2[2] = 42;
    std::cout << std::endl;
    std::cout << "int Array 2: " << intArray2 << std::endl;
     std::cout << "Int Array 1: " << intArray << "     SIZE: " << intArray.size() << std::endl;
     std::cout << std::endl;

     std::cout << "    IT'S TIME TO TRY TO ACCESS A VALID AND AN INVALID INDEX OF THE ARRAYS AND TO CATCH THE EXCEPTION AND SHOW THE e.what ERROR: " << std::endl;
     std::cout << std::endl;
    try {
        std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
        std::cout << "Accessing an invalid index: " << intArray[SIZE] << std::endl;
    } catch ( Array< int >::OutOfBoundsException& e ) {
        std::cout << "Error: " << e.what() << std::endl;
    }
std::cout << std::endl;

    return ( 0 );
}
