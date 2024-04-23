/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:22:59 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 10:23:01 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::Animal(const std::string& type)
{
	std::cout << "Type constructor of Animal called" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = other; 
}

Animal::~Animal(void)
{
	std::cout << "Destructor for Animal called" << std::endl;
}

Animal&				Animal::operator=(const Animal& other)
{
	unsigned int i;

	i = 0;
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = other.getType();
	while (i < 100)
	{
		this->getBrain()->setIdea(other.getBrain()->getIdea(i), i);
		i++;
	}

	return (*this);
}

const std::string&	Animal::getType(void) const
{
	return (this->type);
}

void				Animal::makeSound(void) const
{
	std::cout << "(=generic animal noise)" << std::endl;
}
