/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:13:31 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/07 17:13:34 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  One("O", 1);
    Bureaucrat  Two("T", 150);

	std::cout << std::endl;
    std::cout << "LET`S CREATE TWO BUREAUCRATS: " << std::endl << std::endl;
    std::cout << One << std::endl;
    std::cout << Two << std::endl;

    std::cout << std::endl << "NOW LET`S TRY INVALID GRADES: " << std::endl << std::endl;
    try
    {
        Bureaucrat A("A", 0);
    }
    catch (std::exception& e)
    {
        std::cout << "Cannot create A!" << std::endl;
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat B("B", 151);
    }
    catch (std::exception& e)
    {
        std::cout << "Cannot create B!" << std::endl;
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl << "NOW TEST FOR IMPROVING AND DECREASING GRADES: " << std::endl << std::endl;
    try
    {
        One.incrementGrade();
    }
    catch (std::exception& e)
    {
        std::cout << "Cannot increment the grade of O!" << std::endl;
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        Two.decrementGrade();
    }
    catch (std::exception& e)
    {
        std::cout << "Cannot decrement the grade of T!" << std::endl;
        std::cout << "Exception: " << e.what() << std::endl;
    }
    /*std::cout << std::endl << "TO FINISH, LET'S FORCE TO CREATE OUT OF RANGE (what means to cause an abort): " << std::endl << std::endl;
     Bureaucrat  Lo("Lojafdi", 0);*/
	std::cout << std::endl;
}
