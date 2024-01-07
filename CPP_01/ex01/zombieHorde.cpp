/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:23:07 by mounali           #+#    #+#             */
/*   Updated: 2023/11/12 17:23:08 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie *q = NULL;

    q = new Zombie[N];
    for(int i = 0; i < N; i++)
        q[i].get_name(name);
    return q;

}

