/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:13:47 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/17 16:16:39 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


// methods

void	WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat's sound!" << std::endl;
}


// operators

WrongCat&	WrongCat::operator=( const WrongCat& other )
{
	WrongAnimal::operator=(other);
	return (*this);
}


// constructors and destructors

WrongCat::WrongCat( std::string type ) : WrongAnimal( type )
{
	std::cout << "Constructor called for WrongCat <" << type << ">" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other) : WrongAnimal ( other )
{

}

WrongCat::~WrongCat( )
{
	std::cout << "Destructor called for WrongCat <" << this->_type << ">" << std::endl;
}
