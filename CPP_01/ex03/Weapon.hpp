/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:22:40 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 12:22:41 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
            Weapon();
            Weapon(std::string type);
            ~Weapon();
            std::string const &getType(void);
            void    setType(std::string type);

    private:

            std::string type;
            //Weapon *weapon; 

};

#endif