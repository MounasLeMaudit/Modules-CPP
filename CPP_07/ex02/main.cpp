/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:15:42 by mounali           #+#    #+#             */
/*   Updated: 2023/12/17 16:13:18 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE                                                                                                                    
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//                                                                                                        
//     return 0;
// }


int	main()
{
	int		t;
	Array<int> Tableau_1(5);
	Array<int> Tableau_2(0);

	std::cout << "Creation d un Tableau_1 de la taille de 5 et Tableau_2 taille 0" << std::endl << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = Tableau_1[i];
			std::cout << "Tableau_1[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = Tableau_2[i];
			std::cout << "Tableau_2[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	 Tableau_1[i] = i;
	std::cout << "Setup de la valeur de Tableau_1" << std::endl;
	std::cout << "Taille de Tableau_1: " << Tableau_1.size() << std::endl;
	std::cout << "Taille de Tableau_2: " << Tableau_2.size() << std::endl;
	Tableau_2 = Tableau_1;
	std::cout << "Tableau_2 = Tableau_1" << std::endl;
	std::cout << "Taille de Tableau_1: " << Tableau_1.size() << std::endl;
	std::cout << "Taille de Tableau_2: " << Tableau_2.size() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = Tableau_1[i];
			std::cout << "Tableau_1[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = Tableau_2[i];
			std::cout << "Tableau_2[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	 Tableau_1[i] = 5 - i;
	std::cout <<"Changement de la valeur du Tableau_1" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = Tableau_1[i];
			std::cout << "Tableau_1[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = Tableau_2[i];
			std::cout << "Tableau_2[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}