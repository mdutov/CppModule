/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:39:03 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/29 21:07:59 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Awesome.hpp"

int main ( void )
{
	Awesome a(2), b(4);
	
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	
	return (0);
}
