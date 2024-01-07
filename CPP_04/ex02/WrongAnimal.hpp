/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:58:39 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 11:21:09 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     WRONGANIMAL_HPP
#define     WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal
{
    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal& other);
            WrongAnimal& operator=(const WrongAnimal& other);
            virtual ~WrongAnimal();
            std::string getType() const;
            virtual void    makeSound() const;
    
    protected:
                std::string _type;

};

#endif