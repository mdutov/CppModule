/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:39:25 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/30 20:14:40 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Awesome.hpp"
#include "iter.hpp"


template <class T>
void	another_function( const T *y, int size )
{
	if (!y)
	{
		std::cout << "null pointer\n";
		return;
	}
	std::cout << "\nsome deal with parameters: size = " << size << "\n";
	
}


int main()
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	
	iter( tab, 5, print );
	iter( tab2, 5, print );

	// iter( tab2, 5, another_function );
	
	return 0;
}
