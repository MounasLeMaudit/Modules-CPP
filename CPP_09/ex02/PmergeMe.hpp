/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:30:05 by mounali           #+#    #+#             */
/*   Updated: 2023/12/23 15:46:01 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <sys/time.h>

class PmergeMe
{
	private:
                
                PmergeMe(const PmergeMe & other);
                PmergeMe & operator=(const PmergeMe & other);
	
    public:
                
                PmergeMe();
                ~PmergeMe();
                long long int	getCurrentTimeMicros();

                void			mergeSort(std::vector<int> & vec, std::list<int> & list);

                void			mergeSortVec(std::vector<int> & vec, std::vector<int>::iterator begin, std::vector<int>::iterator end);
                void			mergeVec(std::vector<int>::iterator begin, std::vector<int>::iterator mid, std::vector<int>::iterator end);

                void			mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end);
                void 			mergeSortList(std::list<int> & list, std::list<int>::iterator begin, std::list<int>::iterator end);
};