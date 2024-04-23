/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:16:12 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 12:16:14 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

public:

	Animal( void );
	Animal( const Animal &src );
	virtual ~Animal( void );

	Animal	&operator=( const Animal &other );

	virtual void	makeSound( void ) const ;
	
	const std::string	&getType( void ) const ;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif
