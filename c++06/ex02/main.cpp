/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:34:39 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/11 12:38:59 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base    *generate(void)
{
    int random;

    random = rand() % 3;
    if (random == 0)
        return (new A);
    if (random == 1)
        return (new B);
    if (random == 2)
        return (new C);
    else
        return (NULL);
}

void    identify(Base *p)
{
    if (dynamic_cast<A* >(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B* >(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C* >(p))
        std::cout << "C" << std::endl;
}

void    identify(Base &p)
{
    Base    ptr;
    try
    {
        ptr = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::exception& e) {}
    try
    {
        ptr = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::exception& e) {}
    try
    {
        ptr = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception& e) {}
}

int main()
{
    Base    *base;

    srand(time(NULL));
	std::cout << std::endl;
    std::cout << "Identifying with pointers and references: \n" << std::endl;

    base = generate();
    identify(base);
    identify(*base);
    delete base;
 std::cout << std::endl;
    base = generate();
    identify(base);
    identify(*base);
    delete base;
std::cout << std::endl;
    base = generate();
    identify(base);
    identify(*base);
    delete base;
std::cout << std::endl;
    base = generate();
    identify(base);
    identify(*base);
    delete base;
std::cout << std::endl;
    base = generate();
    identify(base);
    identify(*base);
    delete base;
std::cout << std::endl;
}
