/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:11:21 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/25 01:03:09 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


// methods

void	ShrubberyCreationForm::action( std::string target ) const
{
	std::string filename = target + "_shruberry";;
	std::ofstream	fout(filename.c_str());

	fout << "      !      " << std::endl;
	fout << "     <!>     " << std::endl;
	fout << "    <<!>>    " << std::endl;
	fout << "   <<<!>>>   " << std::endl;
	fout << "   ___!___   " << std::endl;
}


// constructor and destructor

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShruberryCreationForm", 145, 137, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ) : Form( other )
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm& other )
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
