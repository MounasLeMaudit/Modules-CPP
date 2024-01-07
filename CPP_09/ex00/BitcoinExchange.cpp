/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <mounali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:51:14 by mounali           #+#    #+#             */
/*   Updated: 2023/12/23 13:35:54 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file("data.csv");
    std::string line;

    std::getline(file, line);
    while (std::getline(file, line))
    {
        size_t delim = line.find(',');

        std::string date = trim(line.substr(0, delim));
        std::string value = trim(line.substr(delim + 1, line.length()));

        _data[date] = value;
    }

    file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
        _data = other._data;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{

}

void BitcoinExchange::run(const std::string &filename)
{
    std::ifstream   file(filename.c_str());
    std::string          line;

    if (!file.is_open())
    {
        std::cout << "Erreur: Fichier inexistant" << std::endl;
        exit(EXIT_FAILURE);
    }

    if (file.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "Erreur: Fichier vide" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::getline(file, line);

    if (line != "date | value")
    {
        std::cout << "Erreur: Format invalide" << std::endl;
        exit(EXIT_FAILURE);
    }

    while (std::getline(file, line))
    {
        size_t delim = line.find('|');
        if (delim == std::string::npos)
        {
            std::cout << "Erreur: mauvais input => " << line << std::endl;
            continue;
        }

        std::string date = trim(line.substr(0, delim));
        std::string value = trim(line.substr(delim + 1));

        try {
            if (!validDate(date))
                throw std::invalid_argument("date invalide: " + (date.empty() ? "\"\"" : "'" + date + "'"));

            if(value.empty())
                throw std::invalid_argument("valeur invalide: " + (value.empty() ? "\"\"" : "'" + value + "'"));

            validateNumber(value);

            std::map<std::string, std::string>::iterator it;
            std::string prevDate = date;
            it = _data.find(date);

            while (it == _data.end())
            {
                const std::string& currentDate = prevDate;
                prevDate = previousDate(currentDate);
                it = _data.find(prevDate);
            }

            std::cout << date << " => " << value  << " = " << ft_stod(it->second) * ft_stod(value) << std::endl;

        } catch (std::exception &e) {
            std::cout << "Erreur: " << e.what() << std::endl;
        }

    }

    file.close();
}

bool BitcoinExchange::Bisextile_ou_pas(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int BitcoinExchange::ft_stoi(const std::string &str) // convertit une chaine de cara en int
{
    std::stringstream ss(str);
    int value;

    ss >> value;

    return value;
}

double BitcoinExchange::ft_stod(const std::string &str) // double
{
    std::stringstream ss(str);
    double value;

    ss >> value;

    return value;
}

std::string BitcoinExchange::ft_to_string(int value) // int --> chaine de cara
{
    std::stringstream ss;

    ss << value;

    return ss.str();
}

std::string BitcoinExchange::previousDate(const std::string& date) // decremente la date
{
    int year = ft_stoi(date.substr(0, 4));
    int month = ft_stoi(date.substr(5, 2));
    int day = ft_stoi(date.substr(8, 2));

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (Bisextile_ou_pas(year))
    {
        daysInMonth[2] = 29; //mois sacre quand cest bisext
    }

    day--;

    if (day == 0)
    {
        month--;

        if (month == 0)
        {
            month = 12;
            year--;
        }

        day = daysInMonth[month];
    }
    std::string newYear = ft_to_string(year);
    std::string newMonth = (month < 10) ? "0" + ft_to_string(month) : ft_to_string(month);
    std::string newDay = (day < 10) ? "0" + ft_to_string(day) : ft_to_string(day);

    return newYear + "-" + newMonth + "-" + newDay;
}

std::string BitcoinExchange::trim(const std::string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
        return str;

    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

bool BitcoinExchange::fileExists(const std::string &filename)
{
    std::fstream file(filename.c_str());

    bool exists = file.good();

    file.close();
    return exists;
}

bool BitcoinExchange::fileIsEmpty(const std::string &filename)
{
    std::ifstream file(filename.c_str());

    bool isEmpty = file.peek() == std::ifstream::traits_type::eof();

    file.close();
    return isEmpty;
}

void BitcoinExchange::validateNumber(const std::string &str)
{
    double value;

    try
    {
    
        if (std::find(str.begin(), str.end(), '.') != str.end())
        {
            size_t decimalPoint = str.find('.');
            if (std::find(str.begin() + decimalPoint + 1, str.end(), '.') != str.end())
                throw std::invalid_argument("y en a trop");
        }

        bool hasSign = str[0] == '+' || str[0] == '-';
        for (size_t i = hasSign ? 1 : 0; i < str.length(); i++)
        {
            if (::isdigit(str[i]) || str[i] == '.')
                continue;
            throw std::invalid_argument("pas un nombre => " + str);
        }

        value = ft_stod(str);

    } 
    catch (std::exception &e)
    {
        throw std::invalid_argument("pas un nombre => " + str);
    }

    if (value < 0)
        throw std::invalid_argument("pas un nombre positif");

    if (value > 1000.0)
        throw std::invalid_argument("nombre trop grand faut doser");
}


bool BitcoinExchange::ft_all_of(const std::string& str, int (*isDigit)(int))
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isDigit(str[i]))
            return false;
    }

    return true;
}

bool BitcoinExchange::validDate(const std::string &date)
{
    if (date.length() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;

    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);


    if ((!ft_all_of(year, &::isdigit)) ||
        (!ft_all_of(month, &::isdigit)) ||
        (!ft_all_of(day, &::isdigit)))
        return false;

    int yearInt, monthInt, dayInt;

    std::stringstream ssYear(year);
    std::stringstream ssMonth(month);
    std::stringstream ssDay(day);

    ssYear >> yearInt;
    ssMonth >> monthInt;
    ssDay >> dayInt;

    if ((yearInt < 2009 || yearInt > 2022) ||
        (monthInt < 1 || monthInt > 12) ||
        (dayInt < 1 || dayInt > 31))
        return false;

    if ((monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11) && dayInt > 30)
        return false;

    
    if (monthInt == 2)
    {
        bool isLeap = Bisextile_ou_pas(yearInt);
        if (dayInt > (isLeap ? 29 : 28))
            return false;
    }

    return true;
}

// std::string BitcoinExchange::nextDate(const std::string& date)
// {
//     std::string year = date.substr(0, 4);
//     std::string month = date.substr(5, 2);
//     std::string day = date.substr(8, 2);

//     int yearInt = ft_stoi(year);
//     int monthInt = ft_stoi(month);
//     int dayInt = ft_stoi(day);

//     int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//     if (Bisextile_ou_pas(yearInt))
//     {
//         daysInMonth[2] = 29;
//     }

//     dayInt++;

//     if (dayInt > daysInMonth[monthInt])
//     {
//         dayInt = 1;
//         monthInt++;

//         if (monthInt > 12)
//         {
//             monthInt = 1;
//             yearInt++;
//         }
//     }

//     std::string nextYear = ft_to_string(yearInt);
//     std::string nextMonth = (monthInt < 10) ? "0" + ft_to_string(monthInt) : ft_to_string(monthInt);
//     std::string nextDay = (dayInt < 10) ? "0" + ft_to_string(dayInt) : ft_to_string(dayInt);

//     return nextYear + "-" + nextMonth + "-" + nextDay;
// }