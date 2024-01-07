/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:10 by mounali           #+#    #+#             */
/*   Updated: 2023/11/23 14:57:57 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap LeS("Sarkozy");
    FragTrap LeJ("Jacques_Chirac");

    LeS.attack("le bus");
    std::cout << "Sarkozy apres avoir frapper un vehicule se voit dans l incapacite de faire des degats" << std::endl;
    LeS.takeDammage(30);
    LeS.guardGate();
    std::cout << "Sarkozy se met en mode defense et s enfuis en Suisse pour vivre en paix" << std::endl;
    LeS.beRepaired(10);

    LeJ.attack("la mort");
    std::cout << "J-C think is him but in fact he was not and deal 0 damage" << std::endl;
    LeJ.takeDammage(30);
    LeJ.takeDammage(30);
    LeJ.highFiveGuys();
    std::cout << "Il n arrive pas a corrompre la mort" << std::endl;
    LeJ.takeDammage(30);
    LeJ.takeDammage(30);
    std::cout << "Il meurt" << std::endl;

    return 0;

}