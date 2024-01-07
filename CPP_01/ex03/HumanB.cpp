/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:23:46 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 12:23:47 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    
}

HumanB::HumanB(std::string name, Weapon *weapon) : name(name), weapon(weapon)
{

}

HumanB::~HumanB()
{

}

void    HumanB::attack()
{
    if (weapon != NULL)
    {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else
    std::cout << this->name << "does not have weapon ce clochard" << std::endl;
}

void    HumanB::setWeapon(Weapon &newWeapon)
{
    weapon = &newWeapon;

}