/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:23:51 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 10:28:48 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	private:
		unsigned int	size;
	public:
		std::string     ideas[100];
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);

		void setIdea(std::string myidea, int idx);
		Brain&				operator=(const Brain& other);
		void				addIdea(std::string idea);
		const std::string&	getIdea(unsigned int index) const;
};

#endif
