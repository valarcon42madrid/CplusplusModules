/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:56:50 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:56:52 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap *c1 = new ClapTrap();
	ClapTrap *c2 = new ClapTrap("Mr Potatoe");
	ClapTrap *c3 = new ClapTrap(*c1);

	std::cout << std::endl;

	c2->setAttackdamage(4);
	c3->setName("Buddy");

	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Buddy");
	c3->takeDamage(4);
	c3->attack("Slime shiny");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
}
