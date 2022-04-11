/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:28:43 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/26 13:33:41 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{	
	Form* A = new PresidentialPardonForm("A");
	Form* B = new ShrubberyCreationForm("B");
	RobotomyRequestForm C("C");

	Bureaucrat D("D", 1);
	Bureaucrat E("E", 150);
	Bureaucrat F("F", 70);


	// -------------------------------------------
    std::cout << "\n\n------ part 1 ------\n\n" ;
	try
	{
		F.signForm(*A); // signed
		D.signForm(*A); // signed
		D.executeForm(*A); // signed
		D.executeForm(*B); // not executed
		D.executeForm(*A); // throw
		std::cout << "Hello world!" ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


    // -------------------------------------------
    std::cout << "\n\n------ part 2 ------\n\n" ;
	try
	{
		
		D.signForm(*B); // signed
		D.executeForm(*B); // executed
		D.signForm(C); // signed
		E.executeForm(C); // throw
		std::cout << "Hello world!" ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n" ;

    // -------------------------------------------
    std::cout << "\n\n------ part 3 ------\n\n" ;
	try
	{
		D.executeForm(C); // executed
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	delete A;
	delete B;
}
