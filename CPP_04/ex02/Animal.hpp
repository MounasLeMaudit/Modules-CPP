/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:54:07 by mounali           #+#    #+#             */
/*   Updated: 2023/11/27 17:44:28 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class   AAnimal
{
    public :
            
            AAnimal();
            AAnimal(const AAnimal& other);
            AAnimal& operator=(const AAnimal& other);
            virtual ~AAnimal();
            std::string getType() const;
            virtual void    makeSound() const = 0;
    
    protected:
                std::string _type;

};

#endif