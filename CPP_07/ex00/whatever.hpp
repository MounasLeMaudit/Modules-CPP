/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:14:05 by mounali           #+#    #+#             */
/*   Updated: 2023/12/16 12:24:25 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void swap(T &a, T&b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T> T max(T a, T b)
{
    return (a > b ? a : b);
}

template <typename T> T min(T a, T b)
{
    return (a < b ? a : b);
}