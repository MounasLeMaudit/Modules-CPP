/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:48:42 by mounali           #+#    #+#             */
/*   Updated: 2023/12/08 15:07:02 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other.getName(), other.getGradeforSign(), other.getGradeforExec())
{
    this->_target = other._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this == &other)
        return *this;
    this->setSigned(other.getSigned());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeforExec())
    {
        throw GradeTooLowException();
    }
    
    std::ofstream   file;
    std::string     filename;

    filename = this->_target + "_shrubbery";
    file.open(filename.c_str());
    if (file.is_open())
    {
        file << "   ^\n";
        file << "  ^^^\n";
        file << " ^^^^^\n";
        file << "^^^^^^^\n";
        file << "   |\n";

        file.close();

        std::cout << "Arbuste cree comme il se devait dans " << filename << std::endl;
    }
    else
    {
        std::cerr << "Impossible de cree le file arbuste" << std::endl;
    }
}