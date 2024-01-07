/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:53:57 by mounali           #+#    #+#             */
/*   Updated: 2023/11/12 16:48:31 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    Zombie* nzombie = zombie.newZombie("NewFoo: ");

    zombie.announce();
    nzombie->announce();

    delete(nzombie);

    zombie.randomChump("Random: ");

    return 0;
}

