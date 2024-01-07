/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:47:37 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 11:47:38 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "memory address of the string variable: " << &str << std::endl;
    std::cout << "memory address held by ptr: " << ptr << std::endl;
    std::cout << "memory address held by ref: " << &ref << std::endl;

    std::cout << "value of the string variable: " << str << std::endl;
    std::cout << "value pointed by ptr: " << *ptr << std::endl;
    std::cout << "value pointed by ref: " << ref << std:: endl;

    return 0;

}
