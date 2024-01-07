/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:14:02 by mounali           #+#    #+#             */
/*   Updated: 2023/11/27 17:18:52 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
    public:
            Cat();
            Cat(const Cat& other);
            Cat& operator=(const Cat& other);
            ~Cat();

            void    makeSound() const;
    
    private:
            Brain*  _brain;

};

#endif