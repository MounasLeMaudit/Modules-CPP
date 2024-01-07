/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:23:13 by mounali           #+#    #+#             */
/*   Updated: 2023/11/12 17:23:14 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class   Zombie
{
    public:
            Zombie();
            ~Zombie();
            Zombie(std::string name);
            void    announce();
            void    get_name(std::string name);
            Zombie* zombieHorde(int N, std::string name);

    private:
            std::string _name;

};

#endif
