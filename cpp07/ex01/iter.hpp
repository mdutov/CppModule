/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:39:23 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/29 22:34:29 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

template <class T>
void	iter( T *array, size_t size, void (*f)( const T& ) )
{
	if (!array)
	{
		std::cout << "null pointer\n";
		return;
	}
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}


// overloading

template <class T>
void	iter(T *array, int size, void (*f)( const T*, int))
{
	if (!array)
	{
		std::cout << "null pointer\n";
		return;
	}
	f(array, size);
}
