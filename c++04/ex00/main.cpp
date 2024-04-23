/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:17:33 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 12:17:35 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << "getting types of dog and cat" << std::endl << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << std::endl << "Make sound of meta, cat and dog" << std::endl << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	std::cout << std::endl;
	delete meta;
	delete cat;
	delete dog;


	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << std::endl << "getting type of WrongCat" << std::endl << std::endl;
	std::cout << catWrong->getType() << std::endl;
	std::cout << std::endl << "Make sound of metaWrong and catWrong" << std::endl << std::endl;
	metaWrong->makeSound();
	catWrong->makeSound();
	 std::cout << std::endl;
	delete metaWrong;
	delete catWrong;
}
