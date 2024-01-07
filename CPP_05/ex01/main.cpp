/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:24:45 by mounali           #+#    #+#             */
/*   Updated: 2023/12/08 12:02:31 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat *boss;
	Bureaucrat *esclave;
	Form *contrat;


	try
	{
		contrat = new Form("Contrat", 0, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete contrat;

	try
	{
		contrat = new Form("Contrat", 156, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete contrat;

	try
	{
		contrat = new Form("Contrat", 10, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete contrat;

	try
	{
		contrat = new Form("Contrat", 10, 156);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete contrat;

	try
	{
		boss = new Bureaucrat("Boss", 1);
		std::cout << *boss << std::endl;
		esclave = new Bureaucrat("esclave", 150);
		std::cout << *esclave << std::endl;
		contrat = new Form("Contrat", 10, 10);
		std::cout << *contrat << std::endl;
		esclave->signForm(*contrat);
		boss->signForm(*contrat);
		boss->signForm(*contrat);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete boss;
	delete esclave;
	delete contrat;
}
