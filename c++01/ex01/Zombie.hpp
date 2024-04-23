/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:11:46 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:11:48 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>

class   Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
		Zombie();
        ~Zombie(void);
        void    announce(void);
		void	setName(std::string name);
};

void		randomChump(std::string name);
Zombie  *newZombie(std::string name);
Zombie	*zombieHorde ( int N, std::string name);

#endif
