/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:00:22 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/08 11:17:17 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form {
    private:
        const std::string   name;
        const int           gradeToSign;
        const int           gradeToExecute;
        bool                _signed;
        Form(void);
	protected:
		void                checkExecutability(const Bureaucrat& executor) const;
	public:
        Form(const std::string& name, int gradeToSign, int gradeToExecutre);
        Form(const Form& other);
        virtual ~Form(void);
        Form&               operator=(const Form& other);
        const std::string&  getName(void) const;
        int                 getGradeToSign(void) const;
        int                 getGradeToExecute(void) const;
        bool                isSigned(void) const;
        void                beSigned(const Bureaucrat& b);
		virtual void        execute(const Bureaucrat& executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            private:
                const char  *msg;
            public:
                GradeTooHighException(void);
                GradeTooHighException(const char *msg);
                const char      *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            private:
                const char  *msg;
            public:
                GradeTooLowException(void);
                GradeTooLowException(const char *msg);
                const char      *what() const throw();
        };
		 class InvalidFormException : public std::exception
        {
            private:
                const char  *msg;
            public:
                InvalidFormException(void);
                InvalidFormException(const char *msg);
                const char* what() const throw();
        };
};

std::ostream&   operator<<(std::ostream& out, Form& form);

#endif
