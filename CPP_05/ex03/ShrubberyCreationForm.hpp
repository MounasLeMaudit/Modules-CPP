/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:33:17 by mounali           #+#    #+#             */
/*   Updated: 2023/12/08 15:09:09 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"


class ShrubberyCreationForm : public AForm
{
    public:
                ShrubberyCreationForm();
                ShrubberyCreationForm(std::string target);
                ShrubberyCreationForm(const ShrubberyCreationForm& other);
                ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
                ~ShrubberyCreationForm();

                void    execute(Bureaucrat const & executor) const;


    private:
                std::string _target;
               

};