/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:40:04 by mounali           #+#    #+#             */
/*   Updated: 2023/12/23 14:23:54 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Format invalide: (ouvrir double quotes) --> nbr nbr operateur" << std::endl;
        return 1;
    }

    RPN rpn;
    rpn.run(av[1]);

    return 0;
}