/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:45:49 by mounali           #+#    #+#             */
/*   Updated: 2023/11/24 11:37:50 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* nm = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    
    std::cout << std::endl;
    std::cout << "L animal suivant: " << i->getType() << " produit ce son: ";
    i->makeSound();
    std::cout << std::endl;
    std::cout << "L animal suivant: " << j->getType() << " produit ce son: ";
    j->makeSound();
    std::cout << std::endl;
    std::cout << "Une bete sauvage inconnu produit ce son: ";
    meta->makeSound();
    std::cout << std::endl;

    std::cout << "Une sorte de chat qui n est pas un chat: "<< k->getType() << " crie comme ca: ";
    k->makeSound();
    std::cout << std::endl;
    std::cout << "Ce qui n est pas un animal: ";
    nm->makeSound();
    std::cout << std::endl;

    delete meta;
    delete  i;
    delete  j;
    delete nm;
    delete  k;

    return 0;
}