/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:23:08 by mounali           #+#    #+#             */
/*   Updated: 2023/11/22 12:00:11 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_value = i << value_fractional_bits;
}

Fixed::Fixed(const float i)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_value = roundf(i *(1 << value_fractional_bits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    this->fixed_value = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->fixed_value;
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_value = raw;
}

float   Fixed::toFloat(void) const
{
    return (float)this->fixed_value / (float)(1 << value_fractional_bits);
}

int Fixed::toInt(void) const
{
    return this->fixed_value >> value_fractional_bits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & other)
{
	o << other.toFloat();
	return o;
} 