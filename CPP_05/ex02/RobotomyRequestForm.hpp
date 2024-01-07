/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:42:54 by mounali           #+#    #+#             */
/*   Updated: 2023/12/10 19:48:59 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"
#include <cstdlib>


class RobotomyRequestForm : public AForm
{
    public:
                RobotomyRequestForm();
                RobotomyRequestForm(std::string target);
                RobotomyRequestForm(const RobotomyRequestForm& other);
                RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
                ~RobotomyRequestForm();

                void    execute(Bureaucrat const & executor) const;


    private:
                std::string _target;            

};