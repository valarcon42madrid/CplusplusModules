/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:10:31 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:10:33 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int main(void)
{
	Zombie	*qwerty = newZombie("Teferi");
	qwerty->announce();
	randomChump("Jace");
	delete qwerty;
}
