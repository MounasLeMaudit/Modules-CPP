/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:51:33 by mounali           #+#    #+#             */
/*   Updated: 2023/12/15 17:57:39 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data myData(1, 3.14);

    uintptr_t serializedPtr = Serializer::serialize(&myData);

    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    if (deserializedPtr == &myData)
    {
        std::cout << "Serialization et désérialisation réussies !" << std::endl;
    } 
    else
    {
        std::cout << "Échec de la serialization et de la désérialisation !" << std::endl;
    }

    return 0;
}
