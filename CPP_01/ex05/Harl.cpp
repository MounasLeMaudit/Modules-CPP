/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:23:37 by mounali           #+#    #+#             */
/*   Updated: 2023/11/16 22:23:38 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[DEBUG] Je suis la pour debug mais juste donner des indications" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[INFO] Je suis la pour dire pourquoi ca marche pas" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[WARNING] Je suis la pour dire qu il y a une potentiel erreur, tu peux l ignorer a tes risques et peril" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ERROR] Je te dit que ca ne marche pas" << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; //tableau de pointers vers les fonctions

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;

    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*ptr[i])();
        }
        i++;
    }


}