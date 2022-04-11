/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:02:46 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/16 22:40:03 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


// methods

void	Cat::makeSound( void ) const
{
	std::cout << "Cat's sound!" << std::endl;
}


// operators

Cat&	Cat::operator=( const Cat& other )
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}


// constructors and destructors

Cat::Cat( std::string type ) : Animal( type )
{
	std::cout << "Constructor called for Cat <" << type << ">" << std::endl;
}

Cat::Cat( const Cat& other) : Animal ( other )
{

}

Cat::~Cat( )
{
	std::cout << "Destructor called for Cat <" << this->_type << ">" << std::endl;
}
