/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:13:31 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/07 18:00:34 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << "EXAMPLES OF WRONG GRADED FORMS: " << std::endl << std::endl;
    try
    {
        Form    f("EB110", 0, 1);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        Form    f("EB111", 1, 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        Form    f("EB112", 1, 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        Form    f("EB113", 151, 1);
    }
    catch (std::exception &e)
    {
        std::cout << "Exeption: " << e.what() << std::endl;
    }
	   std::cout << std::endl << "EXAMPLES WITH PROPER FORMS AND BUREAUCRATS: " << std::endl << std::endl;
    try
    {
        Bureaucrat  One("Sr O", 1);
        Form        f("EB114", 150, 150);

        std::cout << f << std::endl << std::endl;
        One.signForm(f);
        std::cout << std::endl << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;


    std::cout << "*(NOW OUT OF RANGE)" << std::endl << std::endl;
    try
    {
        Bureaucrat  Two("Mr T", 10);
        Form        f("EB115", 1, 1);

        std::cout << f << std::endl << std::endl;
        Two.signForm(f);
        std::cout << std::endl << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl;
    return 0;
}
