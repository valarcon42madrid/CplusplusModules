/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:23:37 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 10:23:38 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor for Brain called" << std::endl;
	size = 0;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "Destructor for Brain called" << std::endl;
}

Brain&			Brain::operator=(const Brain& other)
{
	 std::cout << "Assignement operator for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	this->size = other.size;
	return (*this);
}

const std::string&	Brain::getIdea(unsigned int index) const
{
	return (this->ideas[index]);
}

void Brain::setIdea(std::string myidea, int idx)
{
    this->ideas[idx] = myidea;
}

void				Brain::addIdea(std::string idea)
{
	if (size == 100)
		return;
	this->ideas[size++] = idea;
}
