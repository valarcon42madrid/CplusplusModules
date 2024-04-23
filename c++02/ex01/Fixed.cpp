/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:41:53 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/19 11:26:29 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int Fixed::getRawBits( void ) const
{
	return (this->fixed_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_value = raw;
}

Fixed::Fixed()
{
	this->fixed_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & op )
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(op.getRawBits());
	return (*this);
}

Fixed::Fixed(int const int_arg)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(int_arg << this->n_fract_bits);
}

Fixed::Fixed(float float_arg)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(float_arg * (1 << this->n_fract_bits)));
}

float Fixed::toFloat(void) const
{
	float	q;

	q = (float)this->getRawBits() / (1 << this->n_fract_bits);
	return (q);
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->n_fract_bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & op)
{
	o << op.toFloat();
	return (o);
}
