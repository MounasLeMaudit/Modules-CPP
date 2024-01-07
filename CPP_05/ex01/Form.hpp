/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:26:51 by mounali           #+#    #+#             */
/*   Updated: 2023/12/07 23:48:52 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include <string>

class   Bureaucrat;

class   Form
{
        public:
                Form();
                Form(std::string name, int gradeforSign, int gradeforExec);
                Form(const Form& other);
                Form& operator=(const Form& other);
                ~Form();

                std::string getName() const;
                bool    getSigned() const;
                int     getGradeforSign() const;
                int     getGradeforExec() const;

                void    beSigned(Bureaucrat& other);

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

std::ostream& operator<<(std::ostream& os, const Form& other);

#endif