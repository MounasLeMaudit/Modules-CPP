/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:07:53 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 11:09:51 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Constructeur de WrongCat" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "Constructeur copie de WrongCat" << std::endl;
    *this = other;
}

WrongCat&    WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Constructeur de l operateur de WrongCat" << std::endl;
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructeur de WrongCat" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "ROAAAAAAAAR" << std::endl;
}