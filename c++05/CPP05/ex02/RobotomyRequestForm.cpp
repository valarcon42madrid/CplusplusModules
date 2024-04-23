/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:57:39 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/08 11:57:40 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
        : Form("RobotomyRequestForm", 72, 45), target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
        : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
        : Form("RobotomyRequestForm", 72, 45), target(other.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

const std::string&  RobotomyRequestForm::getTarget(void) const
{
    return (this->target);
}

void                RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    this->checkExecutability(executor);

    std::cout << "* Some drilling noises *" << std::endl;
    if (rand() % 2)
    {
        std::cout << this->target << " has been  robotomized successfully" << std::endl;
    }
    else
        std::cout << "The robotomization of " << this->target << " has fail" << std::endl;
}
