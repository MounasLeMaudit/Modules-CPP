/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:27 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 09:32:34 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <string>

class   ClapTrap
{
    public :

            ClapTrap(std::string name);
            ClapTrap(const ClapTrap& other);
            ClapTrap& operator=(const ClapTrap& other);
            ~ClapTrap();
            virtual void    attack(const std::string& target);
            void    takeDammage(unsigned int amount);
            void    beRepaired(unsigned int amount);
             std::string _name;
    protected:
    
           unsigned int _HitPoint;
           unsigned int _EnergyPoint;
            unsigned int _AttackDamage;
};
#endif