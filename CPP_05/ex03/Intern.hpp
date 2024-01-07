/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:00:57 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 20:32:14 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class   Intern
{
    public:

            Intern();
            Intern(const Intern& other);
            Intern& operator=(const Intern& other);
            ~Intern();

            AForm    *makeForm(std::string name, std::string target);
            AForm    *makePresidentialPardonForm(std::string target);
            AForm   *makeShrubberyCreationForm(std::string target);
            AForm    *makeRobotomyRequestForm(std::string target);

    private:

};