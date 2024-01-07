/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:22:55 by mounali           #+#    #+#             */
/*   Updated: 2023/11/22 12:01:46 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class   Fixed
{
    public:

            Fixed();
            Fixed(const Fixed& other);
            Fixed(const int i);
            Fixed(const float i);
            Fixed& operator=(const Fixed& other);
            ~Fixed();
            float   toFloat(void) const;
            int     toInt(void) const;
            int getRawBits(void) const;
            void    setRawBits(int const raw);
            

    private:

            int fixed_value;
            static const int    value_fractional_bits = 8;

};
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif