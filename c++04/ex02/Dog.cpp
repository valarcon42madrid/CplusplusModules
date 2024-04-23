/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:25:09 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 10:25:11 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default constructor for Dog called" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal("Dog")
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = other;
}

Dog::~Dog(void)
{
	std::cout << "Destructor for Dog called" << std::endl;
	delete this->brain;
}

Animal&		Dog::operator=(const Animal& other)
{
	std::cout << "Animal Assignement operator for Dog called" << std::endl;
		this->type = other.getType();
		*this->brain = *other.getBrain();

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
