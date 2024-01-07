/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:03:00 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 10:58:09 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Construteur de Animal" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Constructeur copie de Animal" << std::endl;
    *this = other;   
}

Animal&     Animal::operator=(const Animal& other)
{
    std::cout << "Constructeur d operateur" << std::endl;
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructeur de Animal" << std::endl;
}

std::string     Animal::getType() const
{
    return this->_type;
}

void    Animal::makeSound() const
{
    std::cout << "AOUHHHHHHHHHHHHHHHHHHHh" << std::endl;
}