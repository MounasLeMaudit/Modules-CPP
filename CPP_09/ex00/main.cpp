/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:12:25 by mounali           #+#    #+#             */
/*   Updated: 2023/12/23 13:18:27 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Erreur: Impossible d ouvrir le fichier" << std::endl;
		return (1);
	}

	BitcoinExchange exchange;

	exchange.run(av[1]);

	return (0);
}