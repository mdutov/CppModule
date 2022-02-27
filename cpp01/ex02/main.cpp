/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:41:49 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:41:51 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string line = "HI THIS IS BRAIN";
    std::string *stringPTR = &line;
    std::string &stringREF = line;
    
    std::cout << "string line   adress: " << &line << std::endl;
    std::cout << "stringPTR     adress: " << stringPTR << std::endl;
    std::cout << "stringREF     adress: " << &stringREF << std::endl;
    
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
    
    return (0);
}