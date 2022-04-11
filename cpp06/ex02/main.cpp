/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:54:28 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/28 19:41:23 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base  *generate( void )
{
	srand(time(0));

	switch (rand() % 3)
	{
		case 0:
			std::cout << "A generated" << std::endl;
			return (new A);
		case 1:
			std::cout << "B generated" << std::endl;
			return (new B);
		case 2:
			std::cout << "C generated" << std::endl;
			return (new C);
	}

	return (NULL);
}

void	identify(Base *basic)
{
	if (dynamic_cast<A*>(basic))
		std::cout << "A identified" << std::endl;
	else if (dynamic_cast<B*>(basic))
		std::cout << "B identified" << std::endl;
	else if (dynamic_cast<C*>(basic))
		std::cout << "C identified" << std::endl;
}

int main()
{
	Base *basic;

	basic = generate();
	identify(basic);
	
	return (0);
}
