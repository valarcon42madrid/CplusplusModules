/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:57:59 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/08 11:58:01 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : Form("ShrubberyCreationForm", 145, 137), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form("ShrubberyCreationForm", 145, 137), target(other.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

const std::string&      ShrubberyCreationForm::getTarget(void) const
{
    return (this->target);
}

void                    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    std::ofstream   file;
    std::string     name;

	this->checkExecutability(executor);

    name = target + "_shrubbery";
    file.open(name.c_str(), std::ofstream::out);

    file << "     _.,x--=______,            " << std::endl;
    file << "    f88888888888888\\          " << std::endl;
    file << "    >.088888888888888|         " << std::endl;
    file << "   S%8888.8888,8888888P        " << std::endl;
    file << "  C@089888\\º//888º888D        " << std::endl;
    file << "    )988888 V 688º º0º         " << std::endl;
    file << "   (888888  |8/ªº  º           " << std::endl;
    file << "          \\|Y                 " << std::endl;
    file << "           |||                 " << std::endl;
    file << "           |||                 " << std::endl;
    file << "           |||                 " << std::endl;
    file << "        -=~9|Xz__-_            " << std::endl;
    file << "           7 \\                " << std::endl;
    file << "          /    ´               " << std::endl;
    file.close();
}
