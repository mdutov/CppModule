/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:30:25 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 13:18:24 by tcynthia         ###   ########.fr       */
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

void	Animal::printIdeas( int startPos, int endPos ) const
{
	(void)startPos;
	(void)endPos;
}

void	Animal::setIdea( std::string idea, int pos )
{
	(void)idea;
	(void)pos;
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
	std::cout << "Copy constructor called for Animal <" << other._type << ">" << std::endl;
}

Animal::~Animal( )
{
	std::cout << "Destructor called for Animal <" << this->_type << ">" << std::endl;
}
