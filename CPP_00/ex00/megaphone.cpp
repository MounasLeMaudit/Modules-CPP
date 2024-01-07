/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:47:19 by mounali           #+#    #+#             */
/*   Updated: 2023/11/10 11:47:21 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    for (int i = 1; ac > i; ++i)
    {
        for (int j = 0; av[i][j]; ++j)
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                av[i][j] -= 'a' - 'A';
            }
        }
        std::cout << av[i] << ' ';
    }
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
    return 0;
}

