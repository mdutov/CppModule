/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:06:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/25 01:09:41 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


// methods

void	RobotomyRequestForm::action( std::string target ) const
{	
	static int state = 1;

	if (state % 2)
		std::cout << target << " has been robotomized successfully 50 % of the time" << std::endl;
	else
		std::cout << target << " has not been robotomized" << std::endl;
	state++;
}


// operators

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm& other )
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}


// constructor and destructor

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45, target)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ) : Form( other )
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
