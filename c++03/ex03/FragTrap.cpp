/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:59:13 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:59:15 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name )
{
	this->name = name;
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
	std::cout << "Name constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap( void )
{
	std::cout << "Default constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor for FragTrap called" << std::endl;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	this->name = rhs.name;
	this->Attackdamage = rhs.Attackdamage;
	this->Hitpoints = rhs.Hitpoints;
	this->Energypoints = rhs.Energypoints;
	std::cout << "ScavTrap operator = " << name << " called" << std::endl;
	return *this;
}

void		FragTrap::highFivesGuys( void )
{
	if (this->Hitpoints != 0)
	{
		std::cout << "Hey guys! Give me a high five!!!" << std::endl;
	}
	else
	{
		std::cout << "The deaths can't high five..." << std::endl;
	}
}
