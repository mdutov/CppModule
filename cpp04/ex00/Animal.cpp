/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:02:05 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/16 21:29:03 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// methods

void	Animal::makeSound( void ) const
{
	std::cout << "General Animal's sound!" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}


// operators

Animal&	Animal::operator=( const Animal& other )
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}


// constructors and destructors

Animal::Animal( std::string type ) : _type(type) 
{
	std::cout << "Constructor called for Animal <" << type << ">" << std::endl;
}

Animal::Animal( const Animal& other ) : _type(other._type)
{

}

Animal::~Animal( )
{
	std::cout << "Destructor called for Animal <" << this->_type << ">" << std::endl;
}
