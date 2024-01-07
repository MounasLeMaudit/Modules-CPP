/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:08:02 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 09:46:17 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    std::cout << "Constructeur de ScavTrap" << std::endl;

    _HitPoint = 100;
    _EnergyPoint = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap::ClapTrap(other)
{
    std::cout << "Constructeur copie de ScavTrap" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Constructeur operateur de ScavTrap" << std::endl;
    if (this != &other)
    {
        this->_HitPoint = other._HitPoint;
        this->_EnergyPoint = other._EnergyPoint;
        this->_AttackDamage = other._AttackDamage;
        this->_name = other._name;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructeur de ScavTrap" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap rentre maintenant en Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_EnergyPoint > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_AttackDamage << " damage de malade !" << std::endl;
        _EnergyPoint--;
    }
    else
    {
        std::cout << "ScavTrap " << this->_name << " is out of energy and cannot attack!" << std::endl;
    }
}