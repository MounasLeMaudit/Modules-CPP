/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:10:54 by mounali           #+#    #+#             */
/*   Updated: 2023/11/27 17:30:12 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructeur de Brain" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Constructeur copie de Brain" << std::endl;
    *this = other;
}

Brain&   Brain::operator=(const Brain& other)
{
    std::cout << "Constructeur de loperateur de Brain" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        this->_ideas[i] = other.getIdea(i);
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructeur de Brain" << std::endl;
}

std::string Brain::getIdea(int i) const
{
    return this->_ideas[i];
}