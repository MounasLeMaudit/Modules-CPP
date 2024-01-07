/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:22:23 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 12:22:24 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club("crude spiked club");
        HumanA Bob("Bob", club);
        Bob.attack();
        club.setType("some other type of club");
        Bob.attack();
    }

    {
        Weapon club("crude spiked club");
        HumanB Jim("Jim", &club);
        Jim.setWeapon(club);
        Jim.attack();
        club.setType("some spiked club");
        Jim.attack();
    }

    return 0;

}