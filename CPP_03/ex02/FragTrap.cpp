/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:39:34 by mounali           #+#    #+#             */
/*   Updated: 2023/11/23 14:53:35 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    std::cout << "Constructeur de FragTrap" << std::endl;

    _HitPoint = 100;
    _EnergyPoint = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap::ClapTrap(other)
{
    std::cout << "Constructeur copie de FragTrap" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "Constructeur operateur de FragTrap" << std::endl;
    if (this != &other)
    {
        this->_HitPoint = other._HitPoint;
        this->_EnergyPoint = other._EnergyPoint;
        this->_AttackDamage = other._AttackDamage;
        this->_name = other._name;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructeur de FragTrap" << std::endl;
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "specialite absolue: CORRUPTION" << std::endl;
}