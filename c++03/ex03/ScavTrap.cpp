/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:59:32 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:59:34 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
  std::cout << "Default Constructor called of ScavTrap" << std::endl;
  this->name = "ScavTrap";
  this->Attackdamage = 20;
  this->Hitpoints = 100;
  this->Energypoints = 50;
}

ScavTrap::ScavTrap(std::string name) {
  std::cout << "Name Constructor called of ScavTrap " << this->name << std::endl;
  this->name = name;
  this->Attackdamage = 20;
  this->Hitpoints = 100;
  this->Energypoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << "Copy Constructor called of ScavTrap" << std::endl;
	this->name = copy.name;
	this->Hitpoints = copy.Hitpoints;
	this->Energypoints = copy.Energypoints;
	this->Attackdamage = copy.Attackdamage;
}

ScavTrap::~ScavTrap() {
  std::cout << "Destructor called of ScavTrap " << this->name << std::endl;
}

void ScavTrap::swap(ScavTrap &one, ScavTrap &two) {
  std::swap(one.name, two.name);
  std::swap(one.Hitpoints, two.Hitpoints);
  std::swap(one.Energypoints, two.Energypoints);
  std::swap(one.Attackdamage, two.Attackdamage);
}

ScavTrap &ScavTrap::operator=(ScavTrap other) {
	std::cout << "Copy assignment operator called of ScavTrap " << std::endl;
  ScavTrap::swap(*this, other);
  return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (this->Hitpoints > 0) {
	std::cout << "ScavTrap " << this->name << " attacks " << target
              << ", causing " << this->Attackdamage << " points of damage!"
              << std::endl;
  } else {
    std::cout << "ScavTrap " << this->name
              << " is dead and can't attack!" << std::endl;
  }
}

void ScavTrap::GuardGate() {
	if (this->Hitpoints != 0)
	{
    	std::cout << "ScavTrap " << this->name
              << " is now in Gate keeper mode!" << std::endl;
	}
	else
	{
		std::cout << "The deaths can't keep the gate properly... " << std::endl;
	}
}

