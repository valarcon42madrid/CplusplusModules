/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:42:26 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/17 12:42:30 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int	fixed_value;
		static	const	int	n_fract_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & src);
		Fixed & operator=( Fixed const & op );
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed(int const int_arg);
		Fixed(float const float_arg);
		float toFloat(void) const;
		int toInt(void) const;
		int operator>( Fixed const & op) const;
		int operator<( Fixed const & op) const;
		int operator>=( Fixed const & op) const;
		int operator<=( Fixed const & op) const;
		int operator==( Fixed const & op) const;
		int operator!=( Fixed const & op) const;
		Fixed operator+( Fixed const & op) const;
		Fixed operator-( Fixed const & op) const;
		Fixed operator*( Fixed const & op) const;
		Fixed operator/( Fixed const & op) const;
		Fixed & operator++( void );
		Fixed & operator--( void );
		Fixed operator++( int n );
		Fixed operator--( int n );
		static Fixed & min(Fixed & a, Fixed & b );
		static Fixed & max(Fixed & a, Fixed & b );
		static const Fixed & min(const Fixed & a, const Fixed & b );
		static const Fixed & max(const Fixed & a, const Fixed & b );

};

std::ostream & operator<<( std::ostream & o, Fixed const & op);

#endif
