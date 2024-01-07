/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:23:28 by mounali           #+#    #+#             */
/*   Updated: 2023/11/16 22:23:30 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    public :

            //Harl();
            //~Harl();
            void    complain(std::string level);
    
    private:

            void    debug(void);
            void    info(void);
            void    warning(void);
            void    error(void);

};

#endif
