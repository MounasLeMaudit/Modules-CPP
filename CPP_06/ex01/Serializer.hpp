/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:58:03 by mounali           #+#    #+#             */
/*   Updated: 2023/12/15 17:55:18 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdint>
#include <iostream>
#include <string>
#include "Data.hpp"

class Serializer
{

    public:
    
            static uintptr_t serialize(Data* ptr);
            static Data*  deserialize(uintptr_t raw);

    private:

            Serializer();
            Serializer(const Serializer& other);
            Serializer& operator=(const Serializer& other);
            ~Serializer();
};

