/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Anuario.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <valarcon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:47:04 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/10 12:56:28 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANUARIO_HPP
# define ANUARIO_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contacto.hpp"

class	Agenda
{
	private:
		Contacto contacts[8];
		int				quantity;
		int				oldest;
	public:
		Agenda();
		virtual ~Agenda();

		void	init(void);
		void	add_contact(void);
		void	search_init(void);
		void	search_contact(void);
};

#endif
