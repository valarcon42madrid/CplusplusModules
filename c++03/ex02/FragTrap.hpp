/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:58:09 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/25 11:58:11 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap( const std::string &name );
	FragTrap( const FragTrap &src );
	~FragTrap( void );
	FragTrap	&operator=( const FragTrap &other );
	void		highFivesGuys( void );
	
	private:
	FragTrap( void );
};

#endif
