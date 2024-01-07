/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:40:56 by mounali           #+#    #+#             */
/*   Updated: 2023/11/27 17:11:22 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class   Brain
{
    public: 
            Brain();
            Brain(const Brain& other);
            Brain& operator=(const Brain& other);
            ~Brain();
            std::string getIdea(int i) const;


    private:
            std::string _ideas[100];
};

#endif