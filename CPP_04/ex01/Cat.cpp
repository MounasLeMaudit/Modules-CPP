/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:18:11 by mounali           #+#    #+#             */
/*   Updated: 2023/11/27 17:20:54 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Constructeur de Cat" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat& other)
{
    std::cout << "Constructeur copie de Cat" << std::endl;
    *this = other;
}

Cat&    Cat::operator=(const Cat& other)
{
    std::cout << "Constructeur de l operateur de Cat" << std::endl;
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructeur de Cat" << std::endl;
    delete this->_brain;
}

void    Cat::makeSound() const
{
    std::cout << "Meooow" << std::endl;
}