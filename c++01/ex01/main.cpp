/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:11:59 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:12:01 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size;

	size = 8;
	Zombie *horde = zombieHorde(size, "Zombie of the horde nº ");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
