/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:27 by mounali           #+#    #+#             */
/*   Updated: 2023/11/23 11:38:03 by mounali          ###   ########.fr       */
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
            void    attack(const std::string& target);
            void    takeDammage(unsigned int amount);
            void    beRepaired(unsigned int amount);

    private :
            
            std::string _name;
           unsigned int _HitPoint;
           unsigned int _EnergyPoint;
            unsigned int _AttackDamage;
};
#endif