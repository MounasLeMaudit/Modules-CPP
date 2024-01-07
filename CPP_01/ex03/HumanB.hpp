/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:23:51 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 12:23:52 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanB
{
    public:
            HumanB(std::string name);
            HumanB(std::string name, Weapon *weapon);
            ~HumanB();
            void    attack();
            void    setWeapon(Weapon &weapon);

    private:
            std::string name;
            Weapon *weapon;

};

#endif