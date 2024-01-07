/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:00:31 by mounali           #+#    #+#             */
/*   Updated: 2023/12/08 12:07:37 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("defautform"), _gradeforSign(150), _gradeforExec(150), _signed(false)
{

}

Form::Form(std::string name, int gradeforSign, int gradeforExec) : _name(name), _gradeforSign(gradeforSign), _gradeforExec(gradeforExec), _signed(false)
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

Form::Form(const Form &other) : _name(other._name), _gradeforSign(other._gradeforSign), _gradeforExec(other._gradeforExec), _signed(other._signed)
{

}

Form&   Form::operator=(const Form& other)
{
    if (this == &other)
        return *this;
    this->_signed = other.getSigned();
    return *this;
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return this->_name;
}

bool    Form::getSigned() const
{
    return this->_signed;
}

int     Form::getGradeforSign() const
{
    return this->_gradeforSign;
}

int     Form::getGradeforExec() const
{
    return this->_gradeforExec;
}

void    Form::beSigned(Bureaucrat& other)
{
    if (other.getGrade() > this->_gradeforSign)
        throw GradeTooLowException();
    this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
    os <<other.getName() <<", signer par le grade " << other.getGradeforSign() << ", executer par le grade " << other.getGradeforExec() << ", signe: ";
    if (other.getSigned())
        os << "Non";
    else
        os << "Oui";
    return os;
}