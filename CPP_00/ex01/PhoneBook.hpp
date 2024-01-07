/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:33:11 by mounali           #+#    #+#             */
/*   Updated: 2023/11/10 14:33:13 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:

        PhoneBook();
        void    add_contact();
        void    search_contact() const;

    private:
    
        int max_contacts = 8;
        int index;
        Contact contacts[8];
};

#endif
