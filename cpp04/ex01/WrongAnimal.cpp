/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:09:51 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/17 16:12:00 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


// methods

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "General WrongAnimal's sound!" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}


// operators

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other )
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}


// constructors and destructors

WrongAnimal::WrongAnimal( std::string type ) : _type(type) 
{
	std::cout << "Constructor called for WrongAnimal <" << type << ">" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) : _type(other._type)
{

}

WrongAnimal::~WrongAnimal( )
{
	std::cout << "Destructor called for WrongAnimal <" << this->_type << ">" << std::endl;
}
