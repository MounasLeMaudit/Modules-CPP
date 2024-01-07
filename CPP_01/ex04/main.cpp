/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:08:40 by mounali           #+#    #+#             */
/*   Updated: 2023/11/15 16:08:41 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

void    r_line(std::string &str, std::string s1, std::string s2)
{
    size_t startPos = 0;

    while ((startPos = str.find(s1, startPos)) != std::string::npos)
    {
        str = str.substr(0, startPos) + s2 + str.substr(startPos + s1.length());
        startPos += s2.length();
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Erreur: pas le bon nombre d arguments" << std::endl;
        return 1;
    }

    std::ifstream file(av[1]);
    std::string namereplace;
    std::string line;

    namereplace = av[1];
    namereplace.append(".replace");
    std::ofstream outfile(namereplace.c_str());

    if (file.is_open())
    {
        while (getline(file, line))
        {
            line += "\n";
            r_line(line, av[2], av[3]);
            outfile << line;
            if (!file.eof())
                outfile << std::endl;
        }

        file.close();
        outfile.close();
    }

    else
    {
        std::cout << "impossible d ouvrir le fichier" << std::endl;
        return 1;
    }

    return 0;
}
