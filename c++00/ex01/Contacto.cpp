/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacto.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:56:32 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/10 12:56:35 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacto.hpp"

std::string Contacto::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone",
	"Darkest Secret"
};

Contacto::Contacto()
{
	int	i;

	i = FirstName;
	while (i < Secret + 1)
	{
		this->informations[i] = std::string();
		i++;
	}
}

Contacto::~Contacto()
{
}

bool	Contacto::set_informations(int	index)
{
	this->index = index;
	int	i;

	i = FirstName;
	while (i < Secret + 1)
	{
		std::cout << Contacto::fields_name[i] << ":\n+";
		std::getline(std::cin, this->auxiliar[i]);
		if (this->auxiliar[i].length() == 0)
		{
			std::cout << "Contacts can’t have empty fields !" << std::endl;
			return (false);
		}
		i++;
	}
	i = FirstName;
	while (i < Secret + 1)
	{
		this->informations[i] = this->auxiliar[i];
		i++;
	}
	std::cout << "Contact added" << std::endl;
	return (true);
}

void	Contacto::display_info()
{
	std::cout << "|" << std::setw(10) << this->index;
	int i;

	i = FirstName;
	while (i < Nickname + 1)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
		i++;
	}
	std::cout << "|" << std::endl;
}

void Contacto::display(void)
{
	std::cout << " Contact [" << this->index << "]" << std::endl;
	int i;

	i = FirstName;
	while (i < Secret + 1)
	{
		std::cout << Contacto::fields_name[i] << ": ";
		std::cout << this->informations[i] << std::endl;
		i++;
	}
}




