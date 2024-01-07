/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:24:45 by mounali           #+#    #+#             */
/*   Updated: 2023/12/07 22:14:48 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    Bureaucrat *Boss = NULL;
	Bureaucrat *Esclave = NULL;

	try
	{
		Boss = new Bureaucrat("Boss", 1);
		std::cout << *Boss << std::endl;
		Boss->incrementGrade();
		std::cout << *Boss << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Esclave = new Bureaucrat("Esclave", 150);
		std::cout << *Esclave << std::endl;
		Esclave->incrementGrade();
		std::cout << *Esclave << std::endl;
        Esclave->decrementGrade();
        Esclave->decrementGrade();
        std::cout << *Esclave << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	if (Boss)
		delete Boss;
	if (Esclave)
		delete Esclave; 
}
