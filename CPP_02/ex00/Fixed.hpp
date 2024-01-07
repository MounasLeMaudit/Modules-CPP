/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:56:36 by mounali           #+#    #+#             */
/*   Updated: 2023/11/20 15:24:05 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    public:

            Fixed();
            Fixed(const Fixed& other);
            Fixed& operator=(const Fixed& other);
            ~Fixed();
            int getRawBits(void) const;
            void    setRawBits(int const raw);

    private:

            int fixed_value;
            static const int    value_fractional_bits;

};

#endif