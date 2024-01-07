/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:42:38 by mounali           #+#    #+#             */
/*   Updated: 2023/12/21 13:20:06 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }

int main()
{
    std::srand(std::time(0));
    Span sp = Span(10000);
    for (int i = 0; i < 10000; ++i)
    {
        sp.addNumber(std::rand());
    }
    std::cout << "Plus petit distance: " << sp.shortestSpan() << std::endl;
    std::cout << "Plus longue distance: " << sp.longestSpan() << std::endl;

    return 0;
}