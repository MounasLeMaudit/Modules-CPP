/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:14:15 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 20:39:03 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern&     Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{

}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *form = NULL;
    std::string _names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm *(Intern::*tab_ptr_func[3])(std::string target) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};

    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (name == _names[i])
            {
                form = (this->*tab_ptr_func[i])(target);
                return form;
            }
        }

        throw std::invalid_argument("Cannot create " + name + ", form type not recognized");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
}


AForm  *Intern::makePresidentialPardonForm(std::string target)
{
    AForm   *form = new PresidentialPardonForm(target);
    std::cout << "Intern crees" << *form << std::endl;
    return (form);
}

AForm  *Intern::makeRobotomyRequestForm(std::string target)
{
    AForm   *form = new RobotomyRequestForm(target);
    std::cout << "Intern crees" << *form << std::endl;
    return (form);
}

AForm  *Intern::makeShrubberyCreationForm(std::string target)
{
    AForm   *form = new ShrubberyCreationForm(target);
    std::cout << "Intern crees" << *form << std::endl;
    return (form);
}