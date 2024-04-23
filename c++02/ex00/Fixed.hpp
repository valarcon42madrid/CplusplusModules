/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:41:31 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/17 12:41:32 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int	fixed_value;
		static	const	int	n_f_bit = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & src);
		Fixed & operator=( Fixed const & op );
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
