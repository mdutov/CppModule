/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:11:39 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/24 17:23:37 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_value;
		static const int _fractions = 8;
	
	public:
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		Fixed&	operator= ( const Fixed& );
		
		bool	operator< ( const Fixed& ) const;
		bool	operator> ( const Fixed& ) const;
		bool	operator<= ( const Fixed& ) const;
		bool	operator>= ( const Fixed& ) const;
		bool	operator== ( const Fixed& ) const;
		bool	operator!= ( const Fixed& ) const;

		Fixed	operator+ ( const Fixed& ) const;
		Fixed	operator- ( const Fixed& ) const;
		Fixed	operator* ( const Fixed& ) const;
		Fixed	operator/ ( const Fixed& ) const;

		Fixed&	operator++ ();
		Fixed&	operator-- ();
		Fixed	operator++ ( int );
		Fixed	operator-- ( int );

		static Fixed &min( Fixed&, Fixed& );
		static Fixed &max( Fixed&, Fixed& );
		static Fixed const &min( Fixed const &, Fixed const & );
		static Fixed const &max( Fixed const &, Fixed const & );
		
		Fixed();
		Fixed( const Fixed& );
		Fixed( const int );
		Fixed( const float );
		~Fixed();
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
