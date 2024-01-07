/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:03:49 by mounali           #+#    #+#             */
/*   Updated: 2023/12/21 12:24:28 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Demandez une somme d argent" << std::endl;
        std::cout << "Compte courant 12 e" << std::endl;
        return 1;
    }

    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    std::vector<int> vect(tab, tab + sizeof(tab) / sizeof(int));
    easyfind(vect, std::atoi(av[1]));
    return 0;
}