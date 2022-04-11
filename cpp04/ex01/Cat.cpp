/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:51:52 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 13:22:06 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


// methods

void	Cat::makeSound( void ) const
{
	std::cout << "Cat's sound!" << std::endl;
}

void	Cat::printIdeas( int startPos, int endPos ) const
{
	if (startPos < 0)
		startPos = 0;
	if (endPos >= 100)
		endPos = 100;
	for (int i = startPos; i < endPos ; i++)
		if (_brain->getIdea(i) != "")
			std::cout << this->_brain->getIdea(i) << std::endl;
}

void	Cat::setIdea( std::string idea, int pos )
{
	_brain->setIdea(idea, pos);
}


// operators

Cat&	Cat::operator=( const Cat& other )
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

Cat::Cat( std::string type ) : Animal( type )
{
	std::cout << "Constructor called for Cat <" << type << ">" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat& other) : Animal ( other )
{
	std::cout << "Copy constructor called for Cat <" << other._type << ">" << std::endl;
	if (other._brain)
		this->_brain = new Brain(*other._brain);
	else
		this->_brain = new Brain();
}

Cat::~Cat( )
{
	std::cout << "Destructor called for Cat <" << this->_type << ">" << std::endl;
	delete _brain;
}
