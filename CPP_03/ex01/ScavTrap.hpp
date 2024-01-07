/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:08:33 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 09:32:19 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
            ScavTrap(std::string name);
            ScavTrap(const ScavTrap& other);
            ScavTrap& operator=(const ScavTrap& other);
            ~ScavTrap();

            void    guardGate();
            void    attack(const std::string& target);

    //private:

};

#endif
