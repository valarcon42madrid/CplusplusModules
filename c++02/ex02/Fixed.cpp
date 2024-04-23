/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:42:20 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/17 12:42:23 by valarcon         ###   ########.fr       */
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
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & op )
{
	setRawBits(op.getRawBits());
	return (*this);
}

Fixed::Fixed(int const int_arg)
{
	setRawBits(int_arg << this->n_fract_bits);
}

Fixed::Fixed(float float_arg)
{
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

int Fixed::operator>( Fixed const & op) const
{
	if (this->getRawBits() > op.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<( Fixed const & op) const
{
    if (this->getRawBits() < op.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator>=( Fixed const & op) const
{
    if (this->getRawBits() >= op.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator<=( Fixed const & op) const
{
    if (this->getRawBits() <= op.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator==( Fixed const & op) const
{
    if (this->getRawBits() == op.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator!=( Fixed const & op) const
{
    if (this->getRawBits() != op.getRawBits())
        return (1);
    return (0);
}

Fixed Fixed::operator+( Fixed const & op) const
{
	Fixed ret(this->toFloat() + op.toFloat());
	return (ret);
}

Fixed Fixed::operator-( Fixed const & op) const
{
    Fixed ret(this->toFloat() - op.toFloat());
    return (ret);
}

Fixed Fixed::operator*( Fixed const & op) const
{
    Fixed ret(this->toFloat() * op.toFloat());
    return (ret);
}

Fixed Fixed::operator/( Fixed const & op) const
{
    Fixed ret(this->toFloat() / op.toFloat());
    return (ret);
}

Fixed & Fixed::operator++( void )
{
    this->fixed_value += 1;
    return (*this);
}

Fixed & Fixed::operator--( void )
{
    this->fixed_value -= 1;
    return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed	aux = *this;

    this->fixed_value += 1;
    return (aux);
}

Fixed Fixed::operator--( int )
{
    Fixed   aux = *this;

    this->fixed_value -= 1;
    return (aux);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
    if (a > b)
        return (a);
    return (b);
}

std::ostream & operator<<( std::ostream & o, Fixed const & op)
{
	o << op.toFloat();
	return (o);
}
