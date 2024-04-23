/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:24:12 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 10:24:14 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
        std::cout << "Default constructor for Cat called" << std::endl;
		this->brain = new Brain;
}

Cat::Cat(const Cat& other) : Animal("Cat")
{
        std::cout << "Copy constructor for Cat called" << std::endl;
		*this = other;
}

Cat::~Cat(void)
{
        std::cout << "Destructor for Cat called" << std::endl;
		delete this->brain;
}

Animal&		Cat::operator=(const Animal& other)
{
	std::cout << "Assignement operator for Cat called" << std::endl;
      this->type = other.getType();
        *this->brain = *other.getBrain();
	return (*this);
}

void    Cat::makeSound(void) const
{
        std::cout << "Meeeeeeeow" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}
