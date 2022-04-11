/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:53:17 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/26 11:57:03 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Form*	newShruberryForm( std::string target );
		Form*	newRobotomyForm( std::string target );
		Form*	newPresidentialForm( std::string target );
		Form*	noSuchFormFound( std::string target );

	public:
		Form*	makeForm( std::string name, std::string target );
		
		Intern& operator=( const Intern& other );

		class NoSuchFormException : public std::exception
		{
			const char * what() const throw();
		};
		
		Intern();
		Intern( const Intern& other );
		~Intern();
};

#endif
