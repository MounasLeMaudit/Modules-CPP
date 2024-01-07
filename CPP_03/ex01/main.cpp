/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:10 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 09:15:28 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap Mc("McGregor");
    ScavTrap J("Justin");

    Mc.attack("Justin");
    J.takeDammage(20);
    std::cout << "Justin n a plus que 80 hp" << std::endl;
    J.attack("McGregor");
    Mc.takeDammage(20);
    std::cout << "Mcgregor a 80 hp mais prepare son attaque special" << std::endl;
    Mc.beRepaired(10);
    std::cout << "il commence par se heal et enchaine un lancer de bouteille de vodka" << std::endl;
    Mc.guardGate();
    Mc.attack("Justin");
    J.takeDammage(20);
    J.takeDammage(20);
    J.takeDammage(20);
    J.takeDammage(20);
    std::cout << "Mcgregor gagne apres avoir demoli Justin, FIN DU COMBAT" << std::endl;

    return 0;
    
}