/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:02:56 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 13:44:48 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


// methods

void	Dog::makeSound( void ) const
{
	std::cout << "Dog's sound!" << std::endl;
}

void	Dog::printIdeas( int startPos, int endPos ) const
{
	if (startPos < 0)
		startPos = 0;
	if (endPos >= 100)
		endPos = 100;
	for (int i = startPos; i < endPos ; i++)
		if (_brain->getIdea(i) != "")
			std::cout << this->_brain->getIdea(i) << std::endl;
}

void	Dog::setIdea( std::string idea, int pos )
{
	_brain->setIdea(idea, pos);
}


// operators

Dog&	Dog::operator=( const Dog& other )
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->_brain;
		if (other._brain)
			this->_brain = new Brain(*other._brain);
		else
			this->_brain = new Brain();
	}
	return (*this);
}


// constructors and destructors

Dog::Dog( std::string type ) : Animal( type )
{
	std::cout << "Constructor called for Dog <" << type << ">" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog& other) : Animal ( other )
{
	std::cout << "Copy constructor called for Dog <" << other._type << ">" << std::endl;
	if (other._brain)
		this->_brain = new Brain(*other._brain);
	else
		this->_brain = new Brain();
}

Dog::~Dog( )
{
	std::cout << "Destructor called for Dog <" << this->_type << ">" << std::endl;
	delete this->_brain;
}
