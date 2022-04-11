/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/20 02:03:16 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"



void Karen::debug( void )
{
    std::cout << "...DEBUG..." << std::endl;
}

void Karen::info( void )
{
    std::cout << "...INFO..." << std::endl;
}

void Karen::warning( void )
{
    std::cout << "...WARNING..." << std::endl;
}

void Karen::error( void )
{
    std::cout << "...ERROR..." << std::endl;
}

void Karen::nothing( void ) {}

void Karen::complain( std::string level )
{
    void (Karen::*functions[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::nothing};
    void (Karen::*execute)(void);
    int i = 0;
	
    while(i < 4 && (level != level_array[i]))
        i++;
    execute = functions[i];
    (this->*execute)();
}



Karen::Karen()
{
    level_array[0] = "DEBUG";
    level_array[1] = "INFO";
    level_array[2] = "WARNING";
    level_array[3] = "ERROR";
}

Karen::~Karen() {}
