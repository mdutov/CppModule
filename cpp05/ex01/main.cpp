/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:21:46 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/20 16:24:25 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    Bureaucrat A("A");
    Form        B("B", 149, 149);


    // -------------------------------------------
    std::cout << "\n\n------ part 1 ------\n\n" ;
    try
    {
        B.beSigned(A);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }


    // -------------------------------------------
    std::cout << "\n\n------ part 2 ------\n\n" ;
    try
    {
        A.signForm(B);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }


    // -------------------------------------------
    std::cout << "\n\n------ part 3 ------\n\n" ;
    try
    {
        A.incrementGrade();
        A.incrementGrade();
        A.incrementGrade();
        std::cout << "Bureaucrat " << A.getName() << " is okay\n" ;
        std::cout << "Bureaucrat " << A.getName() << " grade is: " << A.getGrade() << "\n";
        A.signForm(B);
        std::cout << "Bureaucrat " << A.getName() << " signed Form " << B.getName() << "\n";
        std::cout << B ;
        std::cout << B.getName() << " grade is: " << B.getSignRequiredGrade() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    return (0);
}
