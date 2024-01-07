/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:26:54 by mounali           #+#    #+#             */
/*   Updated: 2023/11/27 17:19:59 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
            Dog();
            Dog(const Dog& other);
            Dog& operator=(const Dog& other);
            ~Dog();

            void    makeSound() const;
    
    private:
            Brain*  _brain;

};

#endif