/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:11:38 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:11:41 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Created the zombie " << this->_name << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Created a zombie " << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destroyed the zombie " << this->_name << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie  *newZombie(std::string name)
{
    return (new Zombie(name));
}
