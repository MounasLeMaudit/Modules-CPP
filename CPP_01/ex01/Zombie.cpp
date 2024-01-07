/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:22:58 by mounali           #+#    #+#             */
/*   Updated: 2023/11/12 17:23:01 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
    this->_name = name;

}

Zombie::~Zombie()
{
    std::cout << this->_name << ": get destroyed by void " << std::endl;

}

void    Zombie::get_name(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
