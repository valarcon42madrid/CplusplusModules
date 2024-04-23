/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:57:00 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:57:02 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("Default")
	, Hitpoints(10)
	, Energypoints(10)
	, Attackdamage(0)
{
	std::cout << this->name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name)
	, Hitpoints(10)
    , Energypoints(10)
    , Attackdamage(0) {
	std::cout << this->name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;

	std::cout << this->name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " ClapTrap destroyed" << std::endl;
}

void ClapTrap::setName(std::string const name)
{
	std::cout << this->name << " since now will be known as " << name << std::endl;
	this->name = name;
}

void ClapTrap::setAttackdamage(int const attackdamage)
{
  this->Attackdamage = attackdamage;
  std::cout << this->name << " attack now is " << attackdamage << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->name = other.name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;

	std::cout << this->name << " = " << other.name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->Hitpoints == 0) {
		std::cout << this->name << " ClapTrap can't attack because is dead" << std::endl;
		return;
	}

	std::cout
		<< this->name << " ClapTrap attack " << target
		<< ", causing " << this->Attackdamage << " damage"
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->Hitpoints == 0) {
		std::cout << this->name << " ClapTrap can't take damage because is dead" << std::endl;
		return;
	}

	if (amount > this->Hitpoints) {
		amount = this->Hitpoints;
	}

	this->Hitpoints -= amount;

	std::cout << this->name << " ClapTrap has taken " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->Hitpoints == 0) {
		std::cout << this->name << " ClapTrap can't be repaired because is dead" << std::endl;
		return;
	}

	this->Hitpoints += amount;
	std::cout << this->name << " ClapTrap has repaired " << amount << " hit points" << std::endl;
}
