/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:09:37 by mounali           #+#    #+#             */
/*   Updated: 2023/12/15 13:13:11 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Erreur: pas de parametres\n" << "Faut mettre: <programme> <literal>" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);

}