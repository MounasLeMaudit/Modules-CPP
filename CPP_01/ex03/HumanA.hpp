/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:23:19 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 12:23:21 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanA
{
    public:
            HumanA(std::string name, Weapon &weapon);
            ~HumanA();
            void    attack();

    private:
            std::string name;
            Weapon &weapon;

};

#endif
