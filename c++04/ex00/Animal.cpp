/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:16:05 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 12:16:08 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("")
{
	std::cout << "Default constructor for Animal called" << std::endl;
	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal( void )
{
	std::cout << "Destructor for Animal called" << std::endl;
	return;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "(=generic animal noise)"
		<< std::endl;
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance )
{
	ostream << instance.getType();;
	return ostream;
}
