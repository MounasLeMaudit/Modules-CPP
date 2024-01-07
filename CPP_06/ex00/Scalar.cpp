/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:01:44 by mounali           #+#    #+#             */
/*   Updated: 2023/12/15 14:49:24 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter()
{

}

void ScalarConverter::convert(const std::string& literal)
{
    std::string specialTypes[6] = { "-inff", "+inff", "nanf", "-inf", "+inf", "nan" };
    std::string toChar = "";
    int toInt = 0;
    float toFloat = 0;
    double toDouble = 0;

    // Si c'est un nombre
    if (std::isdigit(literal[0]) || (literal[0] == '-' && std::isdigit(literal[1])))
    {
        std::istringstream iss(literal);
        iss >> toInt;

        //std::cout << "char: Non disponible" << std::endl;
        std::cout << "int: " << toInt << std::endl;
        std::cout << "float: " << static_cast<float>(toInt) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(toInt) << ".0" << std::endl;
    
        if (toInt < 0 || toInt > 127)
        {
            std::cout << "char: Non Disponible" << std::endl;
        }
        else
        {
            toChar = static_cast<char>(toInt);
            std::cout << "char: " << toChar << std::endl;
        }
        return;
    }

    // Si c'est un char
    if (literal.size() == 1 && std::isprint(literal[0]))
    {
        toChar = literal[0];
        std::cout << "char: " << toChar << std::endl;
        std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
        return;
    }

    // Si c'est un nombre spécial
    for (int i = 0; i < 6; ++i)
    {
        if (literal == specialTypes[i])
        {
            std::cout << "Special type: " << literal << std::endl;
            return;
        }
    }

    // Si c'est un double ou float
    if (literal[literal.length() - 1] == 'f')
    {
        std::istringstream iss(literal);
        iss >> toFloat;
        toDouble = static_cast<double>(toFloat);
    }
    else
    {
        std::istringstream iss(literal);
        iss >> toDouble;
        toFloat = static_cast<float>(toDouble);
    }

    std::cout << "int: " << static_cast<int>(toDouble) << std::endl;
    std::cout << "float: " << toFloat << ".0f" << std::endl;
    std::cout << "double: " << toDouble << ".0" << std::endl;
}

