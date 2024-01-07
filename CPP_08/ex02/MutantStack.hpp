/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:31:28 by mounali           #+#    #+#             */
/*   Updated: 2023/12/21 13:47:39 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

template< typename T, class Container = std::deque< T > > 
class MutantStack : public std::stack< T, Container >
{

private:

public:

    MutantStack() {};
    ~MutantStack() {};

    MutantStack(const MutantStack& other) { *this = other; }
    MutantStack&    operator=(const MutantStack& other)
    {
        std::stack< T, Container >::operator=(other);
        return *this;
    }

    typedef typename Container::iterator    iterator;

    iterator    begin() { return this->c.begin(); }
    iterator    end() { return this->c.end(); }
};