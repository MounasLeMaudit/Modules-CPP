/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:45:15 by mounali           #+#    #+#             */
/*   Updated: 2023/12/21 13:17:59 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <exception>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <ctime>

class Span
{
    private:
            
            std::list<int>  _list;
            unsigned int    _n;

            Span();

    public:
           
            Span(unsigned int);
            Span(const Span&);
            ~Span();

            Span&               operator=(const Span&);
            void                addNumber(int);
            void                addNumber(std::list<int>::const_iterator, std::list<int>::const_iterator);
            unsigned int        longestSpan() const;
            unsigned int        shortestSpan() const;

            const std::list< int >* getList() const;
};

std::ostream& operator<<(std::ostream&, const Span&);