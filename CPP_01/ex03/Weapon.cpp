/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:22:52 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 12:22:54 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{

}

std::string const &Weapon::getType(void)
{
    return this->type;
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
}