/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:25:58 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/06 10:29:57 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 8

int main( void )
{
    Animal  *animals[NUMBER_OF_ANIMALS];
    Brain   *brain;

              std::cout << std::endl;
        std::cout << "SUBJECT`S EXAMPLE" << std::endl;

    const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;
 std::cout << std::endl;
        std::cout << "MAKING ANIMALS AND SHOWING TYPES" << std::endl;
    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
    {
        if (i < NUMBER_OF_ANIMALS / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << animals[i]->getType() << std::endl;
    }
     std::cout << std::endl;
	 std::cout << std::endl;
	 std::cout << std::endl;
        std::cout << "TAKING BRAIN OF ANIMAL 7 AND PUTTING SOME IDEAS... (That hasn`t got output)" << std::endl << std::endl;
    brain = animals[7]->getBrain();
    brain->ideas[0] = "I'm hungry";
    brain->ideas[1] = "That's a strange idea I'm having";
    brain->ideas[2] = "Ball!!!!!";
    brain->ideas[3] = "Squirrel!!!!!";
     std::cout << "COPY TEST: " << std::endl << "[Previamente a copiar (deep copy) mostraré las ideas 0 y 1 de el animal 7 y del 4 respectivamente (siendo el 7 el que se ha rellenado y el 4 estando vacío)]" << std::endl;
    std::cout << "[a7i0:] " << animals[7]->getBrain()->ideas[0] << std::endl;
    std::cout << "[a7i1:] " << animals[7]->getBrain()->ideas[1] << std::endl;
    std::cout << "[a4i0:] " << animals[4]->getBrain()->ideas[0] << std::endl;
    std::cout << "[a4i1:] " << animals[4]->getBrain()->ideas[1] << std::endl;

        std::cout << std::endl;

        std::cout << "[A continuación copio de clases de animales (cat o *animals[]) la que tiene ideas (es decir, la 7), algo que, al ser copias profundas, hará que mi nueva copia (copy) mantenga todas las propiedades de la anterior ...]" << std::endl;
        *(animals[0]) = *(animals[7]);
        std::cout << std::endl;
        std::cout << "[Muestro una idea de la copia:] " << std::endl << std::endl;
    std::cout << animals[0]->getBrain()->ideas[0] << std::endl;
     std::cout << std::endl << "[modifico y muestro las ideas de la copia y del original:] " << std::endl;
     animals[7]->getBrain()->setIdea("I'm n7", 0);
    animals[0]->getBrain()->setIdea("I'm NOT the original", 0);
    std::cout << "[copia:] " << animals[0]->getBrain()->ideas[0] << std::endl;
    std::cout << "[original:] " << animals[7]->getBrain()->ideas[0] << std::endl;




     std::cout << std::endl;
     std::cout << "[Elimino todos los animales]" << std::endl << std::endl;
    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
    {
            delete animals[i];
    }
  std::cout << std::endl;
}
