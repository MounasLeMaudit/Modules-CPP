/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:54:14 by mounali           #+#    #+#             */
/*   Updated: 2023/11/12 12:54:15 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie 
{
    public:
            Zombie();
            Zombie(std::string& name);
            ~Zombie();
            void    announce();
            Zombie* newZombie(std::string name);
            void    randomChump(std::string name);

    private:
            std::string name;

};

#endif