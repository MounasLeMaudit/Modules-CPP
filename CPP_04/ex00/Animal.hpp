/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:54:07 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 11:21:02 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class   Animal
{
    public :
            
            Animal();
            Animal(const Animal& other);
            Animal& operator=(const Animal& other);
            virtual ~Animal();
            std::string getType() const;
            virtual void    makeSound() const;
    
    protected:
                std::string _type;

};

#endif