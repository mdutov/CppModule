/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:11:36 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/25 16:17:22 by tcynthia         ###   ########.fr       */
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

Fixed& Fixed::operator=( const Fixed& fixed )
{
	this->_value = fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator<( const Fixed& fixed ) const
{
	return  this->_value < fixed.getRawBits();
}

bool	Fixed::operator>( const Fixed& fixed ) const
{
	return  this->_value > fixed.getRawBits();
}

bool	Fixed::operator<=( const Fixed& fixed ) const
{
	return  this->_value <= fixed.getRawBits();
}

bool	Fixed::operator>=( const Fixed& fixed ) const
{
	return  this->_value >= fixed.getRawBits();
}

bool	Fixed::operator==( const Fixed& fixed ) const
{
	return  this->_value == fixed.getRawBits();
}

bool	Fixed::operator!=( const Fixed& fixed ) const
{
	return  this->_value != fixed.getRawBits();
}

Fixed	Fixed::operator+( const Fixed& fixed ) const
{
	Fixed	ret(*this);

	ret.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-( const Fixed& fixed ) const
{
	Fixed	ret(*this);
	
	ret.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*( const Fixed& fixed ) const
{
	Fixed		ret(*this);
	long int	a, b;

	a = this->getRawBits();
	b = fixed.getRawBits();
	ret.setRawBits((a * b) >> _fractions);
	return (ret);
}

Fixed	Fixed::operator/( const Fixed& fixed ) const
{
	Fixed		ret(*this);
	long int	a, b;

	a = this->getRawBits() << _fractions;
	b = fixed.getRawBits();
	ret.setRawBits((int)(a / b));
	return (ret);
}

Fixed&	Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	ret(*this);
	
	this->_value += 1;
	return (ret);
}

Fixed&	Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	ret(*this);
	
	this->_value -= 1;
	return (ret);
}


// min, max

Fixed&	Fixed::min( Fixed& a, Fixed& b )
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max( Fixed& a, Fixed& b )
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const & Fixed::min( Fixed const &a, Fixed const &b )
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const & Fixed::max( Fixed const &a, Fixed const &b )
{
	if (a > b)
		return (a);
	return (b);
}


// output operator

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}


// constructors

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed( const Fixed& fixed )
{
	*this = fixed;
}

Fixed::Fixed( const int value )
{
	this->_value = (value << this->_fractions);
}

Fixed::Fixed( const float value )
{
	this->_value = (int)(roundf(value * (1 << this->_fractions)));
}

Fixed::~Fixed()
{
	
}
