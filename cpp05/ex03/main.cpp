/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:35:32 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/26 16:05:58 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main( void )
{
	Bureaucrat W("W", 1);
	Intern	intern;

	Form* anyForm;
	try
	{
		anyForm = intern.makeForm("presidetial pardon", "A");
		W.signForm(*anyForm);
		W.executeForm(*anyForm);
		delete anyForm;
		std::cout << "\n";

		anyForm = intern.makeForm("robotomy request", "B");
		W.signForm(*anyForm);
		W.executeForm(*anyForm);
		delete anyForm;
		std::cout << "\n";

		anyForm = intern.makeForm("shruberry tree", "C");
		W.signForm(*anyForm);
		W.executeForm(*anyForm);
		delete anyForm;
		std::cout << "\n";

		anyForm = intern.makeForm("qwerty", "D");	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
}
