/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:12:12 by mounali           #+#    #+#             */
/*   Updated: 2023/12/15 18:59:45 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    int randomValue = rand() % 3;
    switch (randomValue)
    {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
        default:
                std::cerr << "valeur non attendue: " << randomValue << std::endl;
                exit(EXIT_FAILURE);
    }
}


// void	identify(Base *p)
// {
// 	A	*AA;
// 	B	*BB;
// 	C	*CC;

// 	AA = dynamic_cast<A *>(p);
// 	BB = dynamic_cast<B *>(p);
// 	CC = dynamic_cast<C *>(p);
// 	if (AA)
// 		std::cout << "Identification du pointeur: --> le type est A" << std::endl;
// 	else if (BB)
// 		std::cout << "Identification du pointeur: --> le type est B" << std::endl;
// 	else if (CC)
// 		std::cout << "Identification du pointeur: --> le type est C" << std::endl;
// 	else
// 		std::cout << "Identification du pointeur: --> ERREUR" << std::endl;
// }

void identify(Base *p)
{
    try
    {
        A *AA = dynamic_cast<A *>(p);
        if (AA != NULL)
        {
            std::cout << "Identification du pointeur: --> le type est A" << std::endl;
            return;
        }

        B *BB = dynamic_cast<B *>(p);
        if (BB != NULL)
        {
            std::cout << "Identification du pointeur: --> le type est B" << std::endl;
            return;
        }

        C *CC = dynamic_cast<C *>(p);
        if (CC != NULL)
        {
            std::cout << "Identification du pointeur: --> le type est C" << std::endl;
            return;
        }

        throw std::exception();
    }
    catch (const std::exception &)
    {
        std::cout << "Identification du pointeur: --> ERREUR" << std::endl;
    }
}

void	identify(Base &p)
{
	try
	{
		A	&AA = dynamic_cast<A &>(p);
		(void)AA;
		std::cout << "Identification de la reference: --> le type est A" << std::endl;
	}
	catch(std::exception &e)
	{
	}

	try
	{
		B	&BB = dynamic_cast<B &>(p);
		(void)BB;
		std::cout << "Identification de la reference: --> le type est B" << std::endl;
	}
	catch(std::exception &e)
	{
	}

	try
	{
		C	&CC = dynamic_cast<C &>(p);
		(void)CC;
		std::cout << "Identification de la reference: --> le type est C" << std::endl;
	}
	catch(std::exception &e)
	{
	}
}

int	main()
{
	Base	*ff;
	srand(time(NULL));

	ff = generate();
	identify(ff);
	identify(*ff);
	delete ff;
	return (0);
}