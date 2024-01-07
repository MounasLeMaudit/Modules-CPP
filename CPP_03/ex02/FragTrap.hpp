/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:39:56 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 09:09:23 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class   FragTrap : public ClapTrap
{
     public:
            FragTrap(std::string name);
            FragTrap(const FragTrap& other);
            FragTrap& operator=(const FragTrap& other);
            ~FragTrap();

            void    highFiveGuys(void);

};

#endif