/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:10:42 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/25 01:43:08 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat A("A");


    // -------------------------------------------
    std::cout << "\n------ part 1 ------\n\n" ;
    try
    {
        std::cout << A.getName() << " grade is " << A.getGrade() << "\n" ;
        A.decrementGrade();
        std::cout << A.getName() << " is okay\n" ;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }


    // -------------------------------------------
    std::cout << "\n\n------ part 2 ------\n\n" ;
    try
    {
        Bureaucrat B("B", 0);
        std::cout << B.getName() << " is okay\n" ;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }


    // -------------------------------------------
    std::cout << "\n\n------ part 3 ------\n\n" ;
    try
    {
        A.incrementGrade();
        A.incrementGrade();
        A.incrementGrade();
        std::cout << "Bureaucrat " << A << " is okay\n" ;
		std::cout << A.getName() << " grade is " << A.getGrade() << "\n" ;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << "\n" ;
    
    return (0);
}
