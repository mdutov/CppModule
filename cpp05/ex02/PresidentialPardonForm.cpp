/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:01:22 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/24 23:52:30 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


// methods

void	PresidentialPardonForm::action( std::string target ) const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


// operators

PresidentialPardonForm& PresidentialPardonForm::operator= ( const PresidentialPardonForm& other )
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}


// constructor and destructor

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ) : Form( other )
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}
