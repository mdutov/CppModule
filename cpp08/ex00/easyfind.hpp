/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:37:53 by tcynthia          #+#    #+#             */
/*   Updated: 2022/04/01 14:03:20 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator	easyFind( T data, int num)
{
	typename T::iterator iter = std::find(data.begin(), data.end(), num);
	if (iter == data.end())
		throw std::invalid_argument("Element hasn't found");
	else
	{
		std::cout << "Element = " << *iter << "\n" << "Index = " << int(iter - data.begin()) << std::endl;
		return (iter);
	}
}
