/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:54:09 by mounali           #+#    #+#             */
/*   Updated: 2023/12/07 22:09:50 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class   Bureaucrat
{
    public :
            
            Bureaucrat();
            Bureaucrat(std::string name, int grade);
            Bureaucrat(const Bureaucrat& other);
            Bureaucrat& operator=(const Bureaucrat& other);
            ~Bureaucrat();
            const   std::string getName() const;
            int    getGrade() const;
            void    incrementGrade();
            void    decrementGrade();

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



    private :

            const   std::string _name;
            int     _grade;



};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif