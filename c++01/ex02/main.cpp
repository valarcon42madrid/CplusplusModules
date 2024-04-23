/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:13:14 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:13:15 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "String adress is " << &string << std::endl;
	std::cout << "StringPTR adress is " << stringPTR << std::endl;
	std::cout << "StringREF adress is " << &stringREF << std::endl;
	std::cout << "String value is " << string << std::endl;
	std::cout << "StringPTR value is " << *stringPTR << std::endl;
	std::cout << "StringREF value is " << stringREF << std::endl;
	return (0);
}
