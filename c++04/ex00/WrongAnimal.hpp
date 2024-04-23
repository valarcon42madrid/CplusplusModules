/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:17:04 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 12:17:07 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &src );
	~WrongAnimal( void );

	WrongAnimal	&operator=( const WrongAnimal &other );

	void	makeSound( void ) const ;
	
	const std::string	&getType( void ) const ;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance );

#endif
