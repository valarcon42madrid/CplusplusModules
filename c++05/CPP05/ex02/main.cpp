/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:13:31 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/08 11:56:20 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat      One("Sr O", 1);
    Bureaucrat      Two("Mr T", 40);
    Bureaucrat      Three("Lord 3", 150);
    Form            *form = NULL;

    srand(time(NULL));
    std::cout << std::endl << "CREATING A FORM: " << std::endl << std::endl;
    try
    {
        form = new PresidentialPardonForm("R2D2");
        form->execute(One);
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "CREATING, SIGNING AND EXECUTING A FORM: " << std::endl << std::endl;
    try
    {
        form = new PresidentialPardonForm("W84T");
        form->beSigned(One);
        form->execute(One);
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	   std::cout << std::endl << "TRYING SOME ROBOTOMIES: " << std::endl << std::endl;
    try
    {
        form = new RobotomyRequestForm("R0T1");
        One.signForm(*form);
        std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "NOW LET`S TEST THE SHRUBBERY AND PRESIDENTIAL FORMS: " << std::endl << std::endl;
    try
    {
        form = new ShrubberyCreationForm("RU8C");
        One.signForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Three.executeForm(*form);
		std::cout << std::endl;
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	 try
    {
        form = new PresidentialPardonForm("P1P2");
        One.signForm(*form);
		std::cout << std::endl;
        Two.executeForm(*form);
		std::cout << std::endl;
        Three.executeForm(*form);
		std::cout << std::endl;
		One.executeForm(*form);
		std::cout << std::endl;
        delete form;
        form = NULL;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
