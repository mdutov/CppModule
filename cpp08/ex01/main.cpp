/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:42:50 by tcynthia          #+#    #+#             */
/*   Updated: 2022/04/01 14:13:13 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span A = Span(5);
	A.addNumber(1);
	A.addNumber(5);
	A.addNumber(10);
	A.addNumber(15);
	A.addNumber(50);
	std::cout << A.shortestSpan() << std::endl;
	std::cout << A.longestSpan() << std::endl;

	std::vector<int>B(0);
	std::srand(time(0));
	for (int i = 0; i < 10000; i++)
		B.push_back(rand() % 50);

	Span C(10000); // 1000 or 10000
	try
    {
        C.addNumber(B.begin(), B.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n"; // throw
    }
	
	Span D = C;
	std::cout << D.shortestSpan() << std::endl; // throw
	std::cout << D.longestSpan() << std::endl;

	return(0);
}
