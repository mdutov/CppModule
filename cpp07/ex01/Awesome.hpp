/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:39:21 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/29 21:49:28 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Awesome
{
	private:
		int _n;

	public:
		int get( void ) const
		{
			return this->_n;
		}
	
	Awesome( void ) : _n( 42 ) { return; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}
