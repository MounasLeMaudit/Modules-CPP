/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:31:48 by mounali           #+#    #+#             */
/*   Updated: 2023/12/17 16:21:04 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void printElement(T& element)
{
    std::cout << element << " ";
}

template <typename T> void doubleElement(T& element)
{
    element *= 2;
}

template < typename T >
void    print( T &i )
{
    std::cout << i << std::endl;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    char str[] = "Je_suis_Batman";

    std::cout << "Tableau de int: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "x2 du tableau de int: ";
    iter(intArray, 5, doubleElement<int>);
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "chaine de caracteres: ";
    iter(str, 15, printElement<char>);
    std::cout << std::endl;
    
    return 0;
}            

// class Awsome{

// public:
//     Awsome(void): _n(42) {return;}
//     int get(void)const {return this->_n;}
// private:
//     int _n;
// };

// std::ostream &operator<<(std::ostream &o, Awsome const &rhs) {o<<rhs.get(); return o;}

// template <typename T>
// void print(T const &x){std::cout << x << std::endl; return;}

// int main(){
//     int tab[] = {0,1,2,3,4};
//     Awsome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
// }
