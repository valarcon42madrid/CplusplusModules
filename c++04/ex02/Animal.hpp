/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:23:18 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 10:23:19 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
	protected:
		std::string	type;
		Animal(const std::string& type);
	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);

		virtual Animal&				operator=(const Animal& other);
		const std::string&	getType(void) const;
		virtual void		makeSound(void) const;
		virtual Brain		*getBrain(void) const = 0;
};

#endif
