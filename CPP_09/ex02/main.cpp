/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:32:45 by mounali           #+#    #+#             */
/*   Updated: 2023/12/23 15:45:45 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<int> v;
	std::list<int> l;
	PmergeMe	pmergeme;

	if (argc == 1)
	{
		std::cout << "./Pmerge nbr nbr nbr nbr " << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		v.push_back(std::atoi(argv[i]));
		l.push_back(std::atoi(argv[i]));
	}
	pmergeme.mergeSort(v, l);
	return 0;
}