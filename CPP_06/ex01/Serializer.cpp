/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:11:21 by mounali           #+#    #+#             */
/*   Updated: 2023/12/15 17:55:32 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer& other)
{
    *this = other;
}

Serializer& Serializer::operator=(const Serializer& other)
{
    (void)other;
    return *this;
}

Serializer::~Serializer()
{
    
}
