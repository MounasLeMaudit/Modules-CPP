/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:01:12 by mounali           #+#    #+#             */
/*   Updated: 2023/12/15 15:00:18 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <sstream>

class ScalarConverter
{
    public: 

              static void    convert(const std::string& literal);

    private:
              ScalarConverter();
              ScalarConverter(const ScalarConverter& other);
              ScalarConverter& operator=(const ScalarConverter& other);
              ~ScalarConverter();
};