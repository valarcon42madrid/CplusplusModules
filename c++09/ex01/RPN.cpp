/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:05:30 by valarcon          #+#    #+#             */
/*   Updated: 2023/04/18 12:05:32 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	this->counter = 0;
}

RPN::~RPN() {}

void	RPN::checker(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Inadequated number of arguments" << std::endl;
        exit(1);
    }
    int i = 1;
    int j = 0;
    while(argv[i])
    {
        j = 0;
        while(argv[i][j])
       {
            if (argv[i][j] == '/' || argv[i][j] == '+' || argv[i][j] == '*' || argv[i][j] == '-')
            {
                this->counter++;
                this->token = argv[i][j];
            }
            j++;
       }
       i++;
    }
    if (this->counter == 0)
    {
        std::cerr << "There isn't operator" << std::endl;
        exit(1);
    }
}
