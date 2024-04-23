/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:12:20 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/08 12:12:22 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    private:
        typedef struct  s_form
        {
            std::string type;
            Form        *form;
        }               t_form;
    public:
        Intern(void);
        Intern(const Intern& other);
        ~Intern(void);

        Intern&     operator=(const Intern& other);
        Form        *makeForm(const std::string& formName, const std::string& target) const;
};

#endif
