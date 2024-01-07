/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:29:37 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 10:50:30 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Constructeur de Dog" << std::endl;
    this->_type = ("Dog");
}

Dog::Dog(const Dog& other)
{
    std::cout << "Constructeur copie de Dog" << std::endl;
    *this = other;
}

Dog&    Dog::operator=(const Dog& other)
{
    std::cout << "Constructeur de loperateur de dog" << std::endl;
    if (this != &other)
    {
        this ->_type = other.getType();
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructeur de Dog" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Wouf Wouf" << std::endl;
}