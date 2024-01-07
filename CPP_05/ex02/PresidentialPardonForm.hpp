/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:57:14 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 18:58:03 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"


class PresidentialPardonForm : public AForm
{
    public:
                PresidentialPardonForm();
                PresidentialPardonForm(std::string target);
                PresidentialPardonForm(const PresidentialPardonForm& other);
                PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
                ~PresidentialPardonForm();

                void    execute(Bureaucrat const & executor) const;


    private:
                std::string _target;
               

};