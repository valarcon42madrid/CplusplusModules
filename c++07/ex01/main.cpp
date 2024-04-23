/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:53:24 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/13 11:07:45 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iter.hpp"

#define N 5

int main( void )
{
    int arr1[] = { 1, 2, 3, 4, 5 };

	std::cout << std::endl;
    std::cout << "int arr: " << std::endl;
    iter(arr1, N, &print);

    double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    std::cout << "\n double arr: " << std::endl;
    iter(arr2, N, &print);

    char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << "\nchar arr: " << std::endl;
    iter(arr3, N, &print);

    std::string arr4[] = { "one", "two", "three", "four", "five" };

    std::cout << "\nstring arr: " << std::endl;
    iter(arr4, N, &print);
	std::cout << std::endl;

    return 0;
}
