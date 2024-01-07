/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:24:45 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 19:50:10 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
	AForm	*shru = new ShrubberyCreationForm("Arbuste");
	AForm	*robo = new RobotomyRequestForm("robot");
	AForm	*pres = new PresidentialPardonForm("president");
	Bureaucrat *b = new Bureaucrat("Boss", 1);
	Bureaucrat *b2 = new Bureaucrat("Esclave", 150);

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
	delete b;
	delete b2;
}
