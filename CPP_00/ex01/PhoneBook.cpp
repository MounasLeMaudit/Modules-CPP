/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:36:28 by mounali           #+#    #+#             */
/*   Updated: 2023/11/11 14:36:29 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0)
{

}

void    PhoneBook::add_contact()
{
    if (index < max_contacts)
    {
        contacts[index++].set_contact();
        std::cout << "Nouveau contact ajoute !" << std::endl;
    }
    else
    {
        for (int i = 1; i < max_contacts; i++)
        {
            contacts[i - 1] = contacts[i];       
        }
        contacts[max_contacts - 1].set_contact();
        std::cout << "Trop de contact, donc le plus ancien c est tchao et bienvenue au nouveau" << std::endl;
    }
}

void    PhoneBook::search_contact() const
{
    std::cout << "Index | First Name | Last Name | Nickname " << std::endl;
    for (int i = 0; i < index; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << contacts[i].get_firstname() << "|";
        std::cout << std::setw(10) << contacts[i].get_lastname() << "|";
        std::cout << std::setw(10) << contacts[i].get_nickname() << std::endl;
    }

    if (index > 0)
    {
        std::cout << "Entree l index du contact: ";
        int s_index;
        std::cin >> s_index;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (s_index >= 1 && s_index <= index)
        {
            contacts[s_index - 1].display_contact();
        }
        else
        {
            std::cout << "index invalide" << std::endl;
        }
    }

}