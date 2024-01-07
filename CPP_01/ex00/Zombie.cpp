/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:54:29 by mounali           #+#    #+#             */
/*   Updated: 2023/11/12 16:47:52 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Foo: ")
{

}

Zombie::~Zombie()
{
    std::cout << "Zombie absorbe par le neant: " << name << std::endl;
    
}

void    Zombie::announce()
{
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}
