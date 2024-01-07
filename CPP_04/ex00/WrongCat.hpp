/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:05:37 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 11:07:46 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class   WrongCat : public WrongAnimal
{
     public:
            WrongCat();
            WrongCat(const WrongCat& other);
            WrongCat& operator=(const WrongCat& other);
            ~WrongCat();

            void    makeSound() const;
};

#endif