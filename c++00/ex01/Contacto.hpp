/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacto.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:56:39 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/10 12:56:40 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTO_HPP
# define CONTACTO_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contacto
{
	private:
		int						index;
		static	std::string		fields_name[5];
		std::string				informations[5];
		std::string				auxiliar[5];

		enum Field
		{
			FirstName = 0,
			LastName,
			Nickname,
			PhoneNumber,
			Secret,
		};
	public:
		Contacto();
		virtual ~Contacto();

		bool	set_informations(int index);
		void	display_info(void);
		void	display(void);
};

#endif
