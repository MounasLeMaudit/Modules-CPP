/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:27:52 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 09:46:13 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "Constructeur ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructeur ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copie de constructeur ClapTrap" << std::endl;
    *this = other;
}

ClapTrap&  ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Constructeur operateur de ClapTrap" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_HitPoint = other._HitPoint;
        this->_EnergyPoint = other._EnergyPoint;
        this->_AttackDamage = other._AttackDamage;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoint > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage !" << std::endl;
        _EnergyPoint--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot attack!" << std::endl;
    }
}

void    ClapTrap::takeDammage(unsigned int amount)
{
    std::cout << "ClapTrap " <<  this->_name << " lose " << amount << " Hp " << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoint > 0)
    {
        std::cout <<  "ClapTrap " << this->_name  << " heal himself to " << amount << " Hp " << std::endl;
        _EnergyPoint--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot be repaired!" << std::endl;
    }
}