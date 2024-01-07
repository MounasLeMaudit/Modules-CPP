/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:07:24 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 19:41:29 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        //this->_name = other._name;
        this->_grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destruction des Bureaucrat" << std::endl;
}

std::string const Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

/*void    Bureaucrat::incrementGrade()
{
    if (this->_grade < 150)
    {
        this->_grade--;
    }
    else
        throw GradeTooHighException();
}

void    Bureaucrat::decrementGrade()
{
    if (this->_grade > 1)
    {
        this->_grade++;
    }
    else
        throw GradeTooLowException();
}*/

void			Bureaucrat::incrementGrade( void )
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void			Bureaucrat::decrementGrade( void )
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& other)
{
    os << other.getName() << ", bureaucrat grade" << other.getGrade();
    return os;
}

void    Bureaucrat::signForm(AForm & Aform)
{
    if (Aform.getSigned())
        std::cout << this->_name << " peux pas signer " << Aform.getName() << " deja signe " << std::endl;
    else if (this->_grade > Aform.getGradeforSign())
        std::cout << this->_name << " peux pas signer " << Aform.getName() << " son grade est trop bas " << std::endl;
    else
    {
        std::cout << this->_name << " signe " << Aform.getName() << std::endl;
        Aform.beSigned(*this); 
    }
}

void            Bureaucrat::executeForm(AForm const & form)
{
    if (!form.getSigned())
        std::cout << this->_name << " couldn't execute " << form.getName() << " because it is not signed." << std::endl;
    else if (this->_grade > form.getGradeforExec())
        std::cout << this->_name << " couldn't execute " << form.getName() << " because his grade is too low." << std::endl;
    else
    {
        std::cout << this->_name << " executed " << form.getName() << std::endl;
        form.execute(*this);
    }
}