/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:37:02 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 12:06:27 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "AMateria object created" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
	std::cout << "AMateria object copied" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria object destroyed" << std::endl;
}

AMateria const	&AMateria::operator=(AMateria const &copy)
{
	this->_type = copy._type;
	std::cout << "AMateria Assignment Operator called" << std::endl;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
