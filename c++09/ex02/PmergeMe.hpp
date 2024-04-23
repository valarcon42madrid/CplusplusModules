/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:06:25 by valarcon          #+#    #+#             */
/*   Updated: 2023/04/18 12:06:28 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <time.h>

class PMergeMeDeque
{
public:
	int tdeque;

	PMergeMeDeque();
	~PMergeMeDeque();

	std::deque<int> deque;

	void	addDeque(char **argv, std::deque<int> *pdeque);
	void	printDeque(std::deque<int> &pdeque);
};

class PMergeMeVector
{
public:
	int tvector;

	PMergeMeVector();
	~PMergeMeVector();

	std::vector<int> vector;

	void	addVector(char **argv, std::vector<int> *pvector);
	void	printVec(std::vector<int> &pvector);
};

#endif
