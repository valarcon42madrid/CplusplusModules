/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:13:31 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/08 12:12:27 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern  intern;
    Form    *fooo;

	std::cout << std::endl;

    fooo = intern.makeForm("shrubbery creation", "home");
    std::cout << *fooo << std::endl;
    std::cout << std::endl;


    fooo = intern.makeForm("robotomy request", "Malcom");
    std::cout << *fooo << std::endl;
    std::cout << std::endl;

    fooo = intern.makeForm("presidential pardon", "Voldemort");
    std::cout << *fooo << std::endl;
    std::cout << std::endl;

    fooo = intern.makeForm("undefined", "ZZZ");
    delete fooo;
	std::cout << std::endl;

    return 0;
}
