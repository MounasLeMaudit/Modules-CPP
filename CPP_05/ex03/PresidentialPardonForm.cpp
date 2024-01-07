/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:59:25 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 19:46:56 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std:: string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other.getName(), other.getGradeforSign(), other.getGradeforExec())
{
    this->_target = other._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this == &other)
        return *this;
    this->setSigned(other.getSigned());
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeforExec())
    {
        throw GradeTooLowException();
    }
    
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}