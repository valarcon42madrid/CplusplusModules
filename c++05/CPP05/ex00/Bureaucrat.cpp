/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:12:51 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/07 17:12:55 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char      *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is higher than the maximum");
}

const char      *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is lower than the minimum");
}

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&         Bureaucrat::operator=(const Bureaucrat& other)
{
    this->grade = other.grade;
    return (*this);
}

const std::string&  Bureaucrat::getName(void) const
{
    return (this->name);
}

int                 Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void                Bureaucrat::incrementGrade(void)
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

void                Bureaucrat::decrementGrade(void)
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream&   operator<<(std::ostream& out, Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (out);
}
