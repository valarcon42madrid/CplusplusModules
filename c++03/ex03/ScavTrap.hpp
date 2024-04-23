/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:59:37 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:59:39 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		 ScavTrap();
		 ScavTrap(std::string name);
		 ScavTrap(const ScavTrap &copy);
		 ~ScavTrap();
		 void swap(ScavTrap &one, ScavTrap &two);
		 ScavTrap &operator=(ScavTrap other);
		 void attack(const std::string &target);
		 void GuardGate();
};

#endif
