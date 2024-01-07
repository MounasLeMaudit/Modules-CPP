/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:26:51 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 19:21:44 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include <string>

class   Bureaucrat;

class   AForm
{
        public:
                AForm();
                AForm(std::string name, int gradeforSign, int gradeforExec);
                AForm(const AForm& other);
                AForm& operator=(const AForm& other);
                virtual ~AForm();

                virtual std::string getName() const;
                virtual bool    getSigned() const;
                virtual int     getGradeforSign() const;
                virtual int     getGradeforExec() const;

                virtual void    beSigned(Bureaucrat& other);
                virtual void    setSigned(bool signedStatus);

                virtual void    execute(Bureaucrat const & executor) const;

            class GradeTooHighException : public std::exception 
            {
                public:
                       virtual const char* what() const throw();
            };

            class   GradeTooLowException : public std::exception
            {
                public: 
                       virtual const char* what() const throw();
            };


        private:

                const std::string _name;
                const int     _gradeforSign;
                const int     _gradeforExec;
                 bool    _signed;


};

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif