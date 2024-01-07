/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:44:19 by mounali           #+#    #+#             */
/*   Updated: 2023/12/21 13:26:21 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n( n )
{

}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator=(Span const &other)
{
    if (this != &other)
    {
        this->_n = other._n;
        this->_list = other._list;
    }
    return *this;
}

Span::~Span() 
{

}

void Span::addNumber(int n)
{
    if (_list.size() > _n)
        throw std::out_of_range("Impossible d ajouter plus d elements cest complet");
    _list.push_back(n);
}

void Span::addNumber(std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd)
{
    if (_list.size() > _n)
        throw std::out_of_range("Impossible d ajouter plus d elements cest complet");
    _list.insert(_list.end(), itBegin, itEnd);
}

const std::list< int >* Span::getList() const
{
    return &_list;
}

unsigned int    Span::longestSpan() const
{
    if ( _list.size() < 2 )
        throw std::out_of_range("La liste est VIDE ou quasi");
    return (*std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end()));
}

unsigned int Span::shortestSpan() const
{
        if (_list.size() < 2)
            throw std::out_of_range("La liste est VIDE ou quasi");

        std::list<int> sortedList(_list);
        sortedList.sort();

        unsigned int min = UINT_MAX;

        std::list<int>::iterator it1 = sortedList.begin();
        std::list<int>::iterator it2 = it1;
        ++it2;


        while (it2 != sortedList.end())
        {
            unsigned int currentSpan = static_cast<unsigned int>(*it2) - static_cast<unsigned int>(*it1);
            if (currentSpan < min)
                min = currentSpan;

            ++it1;
            ++it2;
        }

        return min;
}

std::ostream& operator<<(std::ostream& os, const Span& span)
{
    for ( std::list<int>::const_iterator it = span.getList()->begin(); it != span.getList()->end(); ++it )
        os << *it << " ";
    return os;
}