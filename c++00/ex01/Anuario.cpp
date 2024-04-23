/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Anuario.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:56:11 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/10 12:56:14 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Anuario.hpp"

Agenda::Agenda()
{
	this->quantity = 0;
	this->oldest = 0;
}

Agenda::~Agenda()
{
}

void	Agenda::init(void)
{
	std::cout << "  DIRECTORY" << std::endl;
	std::cout << "Write a command [ADD, SEARCH, EXIT]:" << std::endl;
}

void	Agenda::add_contact(void)
{
	if (this->quantity == 8)
	{
		if (this->oldest == 8)
			this->oldest = 1;
		else
			this->oldest++;
		this->contacts[this->oldest - 1].set_informations(this->oldest);
	}
	else if (this->contacts[this->quantity].set_informations(this->quantity + 1))
		this->quantity++;
}

void	Agenda::search_init(void)
{
	int	i;

	i = 0;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < this->quantity)
	{
		this->contacts[i].display_info();
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	Agenda::search_contact(void)
{
	int	index;
	int	aux;

	aux = 0;

	if (this->quantity == 0)
		std::cout << " You need to add a contact before! " << std::endl;
	else
	{
		this->search_init();
		std::cout << " Enter a Index to display information or 0 to exit \n~";
		while (!(std::cin >> index) || (index < 0 || index > this->quantity))
		{
			if (aux < 8)
			{
				aux++;
			}
			else
			{
				break ;
			}
			if (aux != 8)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << " Invalid index\n~";
			}
		}
		if (aux != 8)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (index > 0)
				this->contacts[index - 1].display();
		}
	}
}
