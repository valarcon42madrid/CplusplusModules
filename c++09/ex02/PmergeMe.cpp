/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:06:16 by valarcon          #+#    #+#             */
/*   Updated: 2023/04/18 12:06:20 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PMergeMeVector::PMergeMeVector()
{
	this->tvector = 0;
}

PMergeMeVector::~PMergeMeVector() {}

PMergeMeDeque::PMergeMeDeque()
{
	this->tdeque = 0;
}

PMergeMeDeque::~PMergeMeDeque() {}

void	PMergeMeVector::addVector(char **argv, std::vector<int> *pvector)
{
	int i = 0;
	while (argv[i])
	{
		pvector->push_back(std::stoi(argv[i]));
		this->tvector++;
		i++;
	}
}

void	PMergeMeDeque::addDeque(char **argv, std::deque<int> *pdeque)
{
	int i = 0;
	while (argv[i])
	{
		pdeque->push_back(std::stoi(argv[i]));
		this->tdeque++;
		i++;
	}
}

void	PMergeMeDeque::printDeque(std::deque<int> &pdeque)
{
	std::deque<int>::iterator it;

	it = pdeque.begin();
	while (it != pdeque.end())
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
}

void	PMergeMeVector::printVec(std::vector<int> &pvector)
{
	std::vector<int>::iterator it;

	it = pvector.begin();
	while (it != pvector.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}
