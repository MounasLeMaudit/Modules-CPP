/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:33:04 by mounali           #+#    #+#             */
/*   Updated: 2023/11/10 14:33:05 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

class   Contact
{
    public:

        Contact();
        void    set_contact();
        void    display_contact() const;
        std::string get_firstname() const;
        std::string get_lastname() const;
        std::string get_nickname() const;

    private:

        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif