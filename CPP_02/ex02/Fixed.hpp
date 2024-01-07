/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:33:24 by mounali           #+#    #+#             */
/*   Updated: 2023/11/22 13:52:19 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
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
            bool operator>(const Fixed& other) const;
            bool operator<(const Fixed& other) const;
            bool operator>=(const Fixed& other) const;
            bool operator<=(const Fixed& other) const;
            bool operator==(const Fixed& other) const;
            bool operator!=(const Fixed& other) const;
            Fixed	operator+(const Fixed& other) const;
            Fixed   operator-(const Fixed& other) const;
            Fixed   operator*(const Fixed& other) const;
            Fixed   operator/(const Fixed& other) const;
            Fixed&	operator++(void); //Prefixe augmente la valeur de lobj
		    Fixed	operator++(int); //Postfixe augmente la valeur de la copie de lobj
		    Fixed&	operator--(void);
		    Fixed	operator--(int);
            static  Fixed& min(Fixed& a, Fixed& b);
            static  Fixed& max(Fixed&a, Fixed& b);
            static const Fixed& min(const Fixed& a, const Fixed& b);
            static const Fixed& max(const Fixed& a, const Fixed& b);


    private:

            int fixed_value;
            static const int    value_fractional_bits = 8;


};
std::ostream & operator<<(std::ostream & o, Fixed const & other);

#endif