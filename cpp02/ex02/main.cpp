/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:11:41 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/24 21:22:14 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void run_test( void)
{
	Fixed c;
	Fixed b( 10.5f);
	Fixed a ( 2 );
	c = a;
	std::cout << "\n-----------------test-----------------\n";
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	
	std::cout << "a == b " << (a == b) << std::endl;
	std::cout << "a != b " << (a != b) << std::endl;
	std::cout << "a == c " << (a == c) << std::endl;
	std::cout << "a > b " << (a > b) << std::endl;
	std::cout << "a < b " << (a < b) << std::endl;
	
	std::cout << "a + b " << a + b << std::endl;
	std::cout << "b - a " << b - a << std::endl;
	std::cout << "a * b " << a * b << std::endl;
	std::cout << "b / a " << b / a << std::endl;
	
	std::cout << "min (a, b) " << Fixed::min(a, b) << std::endl;
	std::cout << "max (a, b) " << Fixed::max(a, b) << std::endl;
	
	std::cout << "\n--------------------------------------\n";
}

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	
	std::cout << Fixed::max( a, b ) << std::endl;

	//run_test();

	return 0;
}