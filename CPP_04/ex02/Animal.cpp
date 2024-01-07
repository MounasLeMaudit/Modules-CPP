/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:03:00 by mounali           #+#    #+#             */
/*   Updated: 2023/11/27 17:36:24 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

AAnimal::AAnimal() : _type("Animal")
{
    std::cout << "Construteur de AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "Constructeur copie de AAnimal" << std::endl;
    *this = other;   
}

AAnimal&     AAnimal::operator=(const AAnimal& other)
{
    std::cout << "Constructeur d operateur" << std::endl;
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Destructeur de Animal" << std::endl;
}

std::string     AAnimal::getType() const
{
    return this->_type;
}

void    AAnimal::makeSound() const
{
    std::cout << "AOUHHHHHHHHHHHHHHHHHHHh" << std::endl;
}