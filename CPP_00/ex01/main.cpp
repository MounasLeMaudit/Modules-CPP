/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:57:17 by mounali           #+#    #+#             */
/*   Updated: 2023/11/11 16:57:18 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;

    std::string choice;

    do
    {
        std::cout << "1. ADD\n";
        std::cout << "2. SEARCH\n";
        std::cout << "3. EXIT\n";
        std::cout << "Il faut choisir: ";

        std::cin >> choice;
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == "ADD")
        {
            phoneBook.add_contact();
        }
        else if (choice == "SEARCH")
        {
            phoneBook.search_contact();
        }
        else if (choice == "EXIT")
        {
            std::cout << "Bye bye" << std::endl;
        }
        else
        {
            std::cout << "Vous avez choisi une option invalide" << std::endl;
        }

    } while (choice != "EXIT");

    return 0;
}
