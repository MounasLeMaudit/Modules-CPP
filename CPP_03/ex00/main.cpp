/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:10 by mounali           #+#    #+#             */
/*   Updated: 2023/11/23 11:59:27 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Jon("Jon");
    ClapTrap Cyril("Cyril");

    Jon.attack("Cyril");
    std::cout << "Jon coup de coude et enleve 4hp + 6hp de degqts mentaux" << std::endl;
    Cyril.takeDammage(10);
    Cyril.attack("Jon");
    std::cout << "Cyril leve son pied et l odeur de ses pieds lui enleve 10 hp" << std::endl;
    Jon.takeDammage(10);
    Jon.beRepaired(10);
    std::cout << "Jon arrive a se heal et sort la ceinture" << std::endl;
   
    std::cout <<  "Jon win, Cyril losed" << std::endl;

    return 0;
    
}