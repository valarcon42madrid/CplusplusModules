/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:13:31 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/11 12:05:30 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
        std::cout << "convert: bad arguments!" << std::endl;
    else
    {
        Converter p(argv[1]);
        std::cout << p << std::endl;
    }
    return (0);
}
