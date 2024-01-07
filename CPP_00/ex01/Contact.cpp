/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:36:04 by mounali           #+#    #+#             */
/*   Updated: 2023/11/11 14:36:06 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

void    Contact::set_contact()
{
    std::cout << "Ecrire le prenom: " << std::endl;
    std::getline(std::cin, first_name);

    std::cout << "Ecrire le nom de famille: " << std::endl;
    std::getline(std::cin, last_name);

    std::cout << "Ecrire le surnom: " << std::endl;
    std::getline(std::cin, nickname);

    std::cout << "Numero de telephone: " << std::endl;
    std::getline(std::cin, phone_number);

    std::cout << "Un secret bien sombre: " << std::endl;
    std::getline(std::cin, darkest_secret);
}

void    Contact::display_contact() const
{
    std::cout << "prenom : " << first_name << std::endl;
    std::cout << "nom de famille: " << last_name << std::endl;
    std::cout << "surnom: " << nickname << std::endl;
    std::cout << "numero de telephone: " << phone_number << std::endl;
    std::cout << "le secreet: " << darkest_secret << std::endl;
}

std::string Contact::get_firstname() const
{
    return first_name;
}

std::string Contact::get_lastname() const
{
    return last_name;
}

std::string Contact::get_nickname() const
{
    return nickname;
}
