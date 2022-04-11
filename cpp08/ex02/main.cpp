/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:43:05 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/31 23:38:25 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// additional
	std::cout << "\n" ;
	
	MutantStack<std::string> C;
	C.push("cat");
	C.push("dog");
	C.push("bird");

	MutantStack<std::string>::reverse_iterator rit = C.rbegin();
	MutantStack<std::string>::reverse_iterator rite = C.rend();
	for(; rit != rite; rit++)
		std::cout << *rit << " " ;
	std::cout << "\n" ;
	
	return 0;
}
