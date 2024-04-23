/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:16:55 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 12:16:58 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("")
{
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Click! Ñiiiuuuuuuummm... KABOOOM!!!"
		<< std::endl;
}

const std::string	&WrongAnimal::getType( void ) const
{
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
	ostream << instance.getType();;
	return ostream;
}
