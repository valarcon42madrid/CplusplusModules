/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:13:01 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/07 17:44:43 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <exception>
#include <iostream>
#include <string>

class Form;

class Bureaucrat {
    private:
        const std::string   name;
        int                 grade;

        Bureaucrat(void);
    public:
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat(void);

        Bureaucrat&         operator=(const Bureaucrat& other);
        const std::string&  getName(void) const;
        int                 getGrade(void) const;
        void                incrementGrade(void);
        void                decrementGrade(void);
		void				signForm(Form & form);

    private:
        class GradeTooHighException : public std::exception
        {
            public:
                const char  *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char  *what() const throw();
        };
};

std::ostream&   operator<<(std::ostream& out, Bureaucrat& b);

#endif
