/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:32:47 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/11 12:33:18 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) {}

B::B(const B& other) { *this = other; }

B::~B(void) {}

B&  B::operator=(const B&) { return (*this); }