/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:17:40 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/28 19:28:34 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cmath>

void    toChar(double d)
{
    std::cout << "char: ";
    if (d == -std::numeric_limits<double>::infinity()
        || d == std::numeric_limits<double>::infinity()
        || std::isnan(d))
        std::cout << "impossible" << std::endl;
    else
    {
        int a = static_cast<int>(d);
        if (a < 32 || a > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(a) << std::endl;
    }
}

void    toInt(double d)
{
    std::cout << "int: ";
    if (std::isnan(d) || d > std::numeric_limits<int>::max() || \
        d <= -std::numeric_limits<int>::max() )
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;
}

void    toFloat(double d)
{
    std::cout << "float: ";
    if (std::isnan(d))
        std::cout << "nanf" << std::endl;
    else if (d == std::numeric_limits<float>::infinity())
        std::cout << "inff" << std::endl;
    else if (d == -std::numeric_limits<float>::infinity())
        std::cout << "-inff" << std::endl;
    else if (d > std::numeric_limits<float>::max() || \
        d <= -std::numeric_limits<float>::max() )
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<float>(d) << "f" << std::endl;
}

void    toDouble(double d)
{
    std::cout << "double: ";
    if (std::isnan(d))
        std::cout << "nan" << std::endl;
    else if (d == std::numeric_limits<double>::infinity())
        std::cout << "inf" << std::endl;
    else if (d == -std::numeric_limits<double>::infinity())
        std::cout << "-inf" << std::endl;
    else
        std::cout << static_cast<double>(d) << std::endl;
}

bool    test(std::string str)
{
    if (!str.compare("nan") || !str.compare("inf") || !str.compare("-inf")
        || !str.compare("nanf") || !str.compare("inff") || !str.compare("-inff"))
        return true;
    else
    {
        int i = 0;
        while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
            i++;
        while (str[i] != '\0')
        {
            if ((str[i] >= '0' && str[i] <= '9') || str[i] == 'f' || str[i] == '.')
                i++;
            else
                return false;
        }
        return true;
    }
}

int main(int argc, char **argv)
{
    double d;

    if (argc != 2)
    {
        std::cout << "Input 1 parameter!" << std::endl ;
        return (1);
    }

    std::cout.precision(1);
    std::cout << std::fixed;

    if (test(argv[1]))
    {
        d = atof(argv[1]);
        toChar(d);
        toInt(d);
        toFloat(d);
        toDouble(d);
    }
    else
        std::cout << "Incorrect input" << std::endl;

    std::cout << "\n";

    return(0);
}
