/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:38:02 by tcynthia          #+#    #+#             */
/*   Updated: 2022/04/01 14:07:59 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <cstdlib>
#include <ctime>
#include "easyfind.hpp"

int main( void )
{
	std::vector<int> capsula(0);
	std::srand(time(0));
	
	for (int i = 0; i < 0; i++)
		capsula.push_back(std::rand() % 10);

	int num = rand() % 10;\
	std::cout << "Element to find: " << num << "\n";
	try
	{
		easyFind(capsula, 100) ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	for (int i = 0; i < 0; i++)
		std::cout << capsula[i] << " ";
	std::cout << std::endl;

	return (0);
}
