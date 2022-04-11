/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:00:58 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/25 16:04:20 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// functions

int Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void	Fixed::setRawBits( int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt( void ) const
{
	return (this->_value >> 8);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_fractions));
}


// operators

Fixed& Fixed::operator=( const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}


// constructors

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (value << this->_fractions);
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * (1 << this->_fractions)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
