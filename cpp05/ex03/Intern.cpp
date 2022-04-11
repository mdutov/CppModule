/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:57:39 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/26 13:13:29 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


// methods

Form*	Intern::newShruberryForm( std::string target )
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::newPresidentialForm( std::string target )
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::newRobotomyForm( std::string target )
{
	return (new RobotomyRequestForm(target));
} 

Form*	Intern::noSuchFormFound( std::string target )
{
	(void)target;
	throw Intern::NoSuchFormException();
	return (0);
}

Form*	Intern::makeForm( std::string name, std::string target )
{
	Form* ret;
	int i;
	std::string forms[3] = {
					"presidetial pardon",
					"robotomy request",
					"shruberry tree"};

	Form* (Intern::*funcs[4])( std::string target ) = { 
										&Intern::newPresidentialForm,
										&Intern::newRobotomyForm,
										&Intern::newShruberryForm,
										&Intern::noSuchFormFound};

	for (i = 0; i < 3 && forms[i] != name; i++)
		;
	ret = (this->*funcs[i])(target); 
	std::cout << "Intern creates <" << name << ">\n";
	return (ret);
}


// operators

Intern&	Intern::operator=( const Intern& other )
{
	(void)other;
	return (*this);
}


// exception

const char * Intern::NoSuchFormException::what() const throw()
{
	return ("No such form");
}


// constructor and destructor

Intern::Intern()
{

}

Intern::Intern( const Intern& other )
{
	(void)other;
}

Intern::~Intern()
{

}
