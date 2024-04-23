/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:59:00 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:59:02 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), name("default")
{
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energypoints = ScavTrap::Energypoints;
    this->Attackdamage = FragTrap::Attackdamage;

    std::cout << this->name << " DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name)
{
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energypoints = ScavTrap::Energypoints;
    this->Attackdamage = FragTrap::Attackdamage;

    std::cout << this->name << " DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), FragTrap(), ScavTrap()
{
    *this = other;

    std::cout << this->name << " DiamondTrap copy created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << this->name << " DiamondTrap destroyed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	ClapTrap::operator=(other);
	ScavTrap();
	FragTrap();
    std::cout << this->name << " DiamondTrap = " << other.name << std::endl;

    return *this;
}

void DiamondTrap::attack(const std::string& target) {
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
    std::cout << "I am " << this->name << ", my ClapTrap name is " << this->ClapTrap::name << std::endl;
}
