/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:24:45 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 20:30:33 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	AForm	*shru;
	AForm	*robo;
	AForm	*pres;
	AForm	*form;
	Intern	*intern = new Intern();
	Bureaucrat *b = new Bureaucrat("Boss", 1);
	Bureaucrat *b2 = new Bureaucrat("Esclave", 150);

	shru = intern->makeForm("shrubbery creation", "forest");
	robo = intern->makeForm("robotomy request", "robot");
	pres = intern->makeForm("presidential pardon", "president");
	form = intern->makeForm("nonexistantform", "someone");

	std::cout << *b << std::endl;
	std::cout << *b2 << std::endl;
	std::cout << *shru << std::endl;
	std::cout << *robo << std::endl;
	std::cout << *pres << std::endl;

	b->executeForm(*shru);
	b->signForm(*shru);
	b->executeForm(*shru);
	b->signForm(*robo);
	b->executeForm(*robo);
	b->signForm(*pres);
	b->executeForm(*pres);

	b2->signForm(*shru);
	b2->executeForm(*shru);
	b2->signForm(*robo);
	b2->executeForm(*robo);
	b2->signForm(*pres);
	b2->executeForm(*pres);

	delete shru;
	delete robo;
	delete pres;
	delete form;
	delete intern;
	delete b;
	delete b2;
}


