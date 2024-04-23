/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:16:13 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:16:16 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():
	type("")
{
}

Weapon::Weapon(std::string const &type):
	type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string const &type)
{
	this->type = type;
}

std::string const &Weapon::getType(void) const
{
	return (this->type);
}
