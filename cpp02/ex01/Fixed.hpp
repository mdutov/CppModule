/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:00:56 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/24 17:06:30 by tcynthia         ###   ########.fr       */
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
		Fixed& operator=( const Fixed& );

		Fixed();
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed & );
		~Fixed();
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
