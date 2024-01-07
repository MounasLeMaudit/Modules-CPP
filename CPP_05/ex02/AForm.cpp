/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:00:31 by mounali           #+#    #+#             */
/*   Updated: 2023/12/08 15:32:43 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("defautform"), _gradeforSign(150), _gradeforExec(150), _signed(false)
{

}

AForm::AForm(std::string name, int gradeforSign, int gradeforExec) : _name(name), _gradeforSign(gradeforSign), _gradeforExec(gradeforExec), _signed(false)
{
    try
    {
        if (gradeforSign < 1 || gradeforExec < 1)
            throw GradeTooHighException();
        if (gradeforSign > 150 || gradeforExec > 150)
            throw GradeTooLowException();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

AForm::AForm(const AForm &other) : _name(other._name), _gradeforSign(other._gradeforSign), _gradeforExec(other._gradeforExec), _signed(other._signed)
{

}

AForm&   AForm::operator=(const AForm& other)
{
    if (this == &other)
        return *this;
    this->_signed = other.getSigned();
    return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
    return this->_name;
}

bool    AForm::getSigned() const
{
    return this->_signed;
}

int     AForm::getGradeforSign() const
{
    return this->_gradeforSign;
}

int     AForm::getGradeforExec() const
{
    return this->_gradeforExec;
}

void    AForm::beSigned(Bureaucrat& other)
{
    if (other.getGrade() > this->_gradeforSign)
        throw GradeTooLowException();
    this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream& os, const AForm& other)
{
    os <<other.getName() <<", signer par le grade " << other.getGradeforSign() << ", executer par le grade " << other.getGradeforExec() << ", signe: ";
    if (other.getSigned())
        os << "Non";
    else
        os << "Oui";
    return os;
}

void    AForm::setSigned(bool signedStatus)
{
    _signed = signedStatus;
}

void    AForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeforExec())
    {
        throw GradeTooLowException();
    }
}