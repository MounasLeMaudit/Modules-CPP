/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:55:10 by mounali           #+#    #+#             */
/*   Updated: 2023/11/12 16:48:18 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string& name) : name(name)
{

}

Zombie* Zombie::newZombie(std::string name)
{
    Zombie* newZombie = new Zombie(name);
    return newZombie;
}
