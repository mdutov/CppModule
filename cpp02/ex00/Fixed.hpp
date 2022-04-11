/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 01:59:45 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/24 22:12:52 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _fractional = 8;
		
	public:
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed&	operator=( const Fixed& );

		Fixed();
		Fixed( const Fixed & );
		~Fixed();
};

#endif
