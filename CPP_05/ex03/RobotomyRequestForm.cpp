/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:44:33 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 19:46:49 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std:: string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.getGradeforSign(), other.getGradeforExec())
{
    this->_target = other._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this == &other)
        return *this;
    this->setSigned(other.getSigned());
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int i = 0;

    if (executor.getGrade() > getGradeforExec())
    {
        throw GradeTooLowException();
    }

    std::cout << "Drilling noises" << std::endl;
    srand(time(NULL));
    i = rand();
    if (i % 2 == 0)
        std::cout << this->_target << "has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << "the robotomy failed" << std::endl;
}