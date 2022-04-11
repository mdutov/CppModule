/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:39:08 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/31 10:48:31 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap( T& a, T& b )
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T&	max( T& a, T& b )
{
	if (b >= a)
		return (b);
	else
		return (a);
}

template <typename T>
T&	min( T& a, T& b)
{
	if (b <= a)
		return (b);
	else
		return (a);
}
