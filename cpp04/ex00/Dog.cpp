/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:02:54 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/16 22:40:28 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


// methods

void	Dog::makeSound( void ) const
{
	std::cout << "Dog's sound!" << std::endl;
}


// operators

Dog&	Dog::operator=( const Dog& other )
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}


// constructors and destructors

Dog::Dog( std::string type ) : Animal( type )
{
	std::cout << "Constructor called for Dog <" << type << ">" << std::endl;
}

Dog::Dog( const Dog& other) : Animal ( other )
{

}

Dog::~Dog( )
{
	std::cout << "Destructor called for Dog <" << this->_type << ">" << std::endl;
}
