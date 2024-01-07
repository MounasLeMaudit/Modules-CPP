/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:39:54 by mounali           #+#    #+#             */
/*   Updated: 2023/12/23 14:23:47 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() 
{
    this->_ops[0].op = "+";
    this->_ops[0].f = &RPN::add;
    this->_ops[1].op = "-";
    this->_ops[1].f = &RPN::sub;
    this->_ops[2].op = "*";
    this->_ops[2].f = &RPN::mul;
    this->_ops[3].op = "/";
    this->_ops[3].f = &RPN::div;
    this->_ops[4].op = "^";
    this->_ops[4].f = &RPN::pow;
}

RPN::RPN(RPN const &other)
{
    *this = other;
}

RPN &RPN::operator=(RPN const &other)
{
    if (this != &other)
    {
        this->_stack = other._stack;
    }
    return *this;
}

RPN::~RPN() 
{

}

void RPN::run(std::string input)
{
    std::stringstream ss(input);
    std::string operations[] = {"+", "-", "*", "/", "^"};

    try {
        while (ss >> input)
        {
            int index = index_of(input, operations, 5);
            if (index != -1)
            {
                 if (this->_stack.size() < 2)
                      throw std::invalid_argument("Pas assez d elements dans la stack");

                 int a = this->_stack.top();
                 this->_stack.pop();
                 int b = this->_stack.top();
                 this->_stack.pop();

                 this->_stack.push((this->*_ops[index].f)(b, a));
            }
            else
                this->_stack.push(ft_stoi(ft_all_of(input, &std::isdigit)));
        }

        if (this->_stack.size() != 1)
            throw std::invalid_argument("trop d operandes (nbr)");

        std::cout << this->_stack.top() << std::endl;

    } catch (std::exception& e) {
        std::cout << "Erreur" << std::endl;
    }

    ss.clear();
}

int RPN::add(int a, int b)
{
    return a + b;
}

int RPN::sub(int a, int b)
{
    return a - b;
}

int RPN::mul(int a, int b)
{
    return a * b;
}

int RPN::div(int a, int b)
{
    if (b == 0)
        throw std::invalid_argument("Division par 0");

    return a / b;
}

int RPN::pow(int a, int b)
{
    return std::pow(a, b);
}

int RPN::index_of(std::string str, std::string *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (str == arr[i])
            return i;
    }
    return -1;
}

int RPN::ft_stoi(const std::string& str)
{
    std::stringstream ss(str);
    int result;

    ss >> result;

    if (ss.fail())
        throw std::invalid_argument("Echec de la conversion");

    return result;
}

std::string RPN::ft_all_of(const std::string& str, int (*isDigit)(int))
{

    bool valid = true;
    size_t i = 0;

    if (str.length() == 1 && (str[0] == '+' || str[0] == '-'))
        valid = false;

    if (str.length() == 0)
        valid = false;

    if (str[0] == '+' || str[0] == '-')
        i = 1;

    for (; i < str.length(); i++)
    {
        if (!isDigit(str[i]))
            valid = false;
    }

    if (!valid) throw std::invalid_argument("Cest pas un nbr");

    return str;
}