/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:01:56 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 11:11:00 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include "Animal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "Construteur de WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Constructeur copie de WrongAnimal" << std::endl;
    *this = other;   
}

WrongAnimal&     WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Constructeur d operateur" << std::endl;
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructeur de WrongAnimal" << std::endl;
}

std::string     WrongAnimal::getType() const
{
    return this->_type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Bonjour je ne suis pas un animal" << std::endl;
}