/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:50:05 by mounali           #+#    #+#             */
/*   Updated: 2023/12/21 12:16:10 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

template < typename T > 
void    easyfind(T& container, int value)
{
    if (std::find(container.begin(), container.end(), value ) != container.end())
        std::cout << "Voila votre monnaie: --> " << value << " EUROS" << std::endl;
    else
        std::cout << "Retrait d argent impossible, vous etes trop pauvre" << std::endl;
}