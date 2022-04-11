/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:34:08 by tcynthia          #+#    #+#             */
/*   Updated: 2022/04/01 14:10:35 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <vector>

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <limits>

class Span
{
	private:
		unsigned int _size;
		std::list<int> _data;

	public:
		void 		addNumber( const int& elem );
		long int	shortestSpan( void );
		long int 	longestSpan( void );
		template<typename T>
		void 		addNumber(T it1, T it2)
		{
			if (static_cast<unsigned int>(std::distance(it1, it2)) > _size - _data.size())
				throw std::overflow_error("There is no space to add elements");
			else
				for (; it1 != it2; it1++)
					addNumber(*it1);
		}

		Span( unsigned int size = 0);
		Span( const Span& other );
		Span& operator=( const Span& other );
		virtual ~Span();
};
