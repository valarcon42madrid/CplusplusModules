/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:58:37 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:58:40 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
    c2->takeDamage(1000);
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

    std::cout << std::endl;
    std::cout << std::endl;

    ScavTrap *dobby = new ScavTrap("Dobby");
    ScavTrap elvis = ScavTrap("Elvis");

    elvis.GuardGate();
    dobby->attack("Elvis");
    elvis.attack("Dobby");
    elvis.beRepaired(10);

    std::cout << std::endl;
    elvis.takeDamage(1000);
    elvis.takeDamage(2);
    elvis.GuardGate();
    ScavTrap fiona = elvis;
    fiona.beRepaired(50);
    fiona.setName("Fiona");
    fiona.beRepaired(50);

    std::cout << std::endl;
    ClapTrap gunther = ClapTrap("Gunther");
    gunther.attack("Dobby");
    gunther.setAttackdamage(100);
    gunther.attack("Dobby");

	delete dobby;

	
	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap fr4gtp("fr4gtp");
		fr4gtp.attack("Handsome Jack");
		fr4gtp.takeDamage(6);
		fr4gtp.beRepaired(4);
		fr4gtp.takeDamage(3);
		fr4gtp.highFivesGuys();
		fr4gtp.beRepaired(8);
		fr4gtp.takeDamage(17);
		fr4gtp.takeDamage(99);
		fr4gtp.highFivesGuys();

		 std::cout << std::endl;
		ScavTrap sc4vtp("sc4vtp");
		sc4vtp.attack("Handsome Jack");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.GuardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(117);
		sc4vtp.GuardGate();

		 std::cout << std::endl;
		ClapTrap cl4ptp("cl4ptp");
		cl4ptp.attack("Handsome Jack");
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(111);
		cl4ptp.beRepaired(8);
		 cl4ptp.takeDamage(3);

		 std::cout << std::endl;
    std::cout << std::endl;
}
