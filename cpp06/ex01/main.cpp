/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:17:40 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/28 19:36:58 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tr1/cstdint>
#include <limits>
#include <iostream>

struct Data
{
	int 		n;
	float 		f;
	double 		d;
	char 		c;
	std::string s;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data ptr;
	Data *raw;
	uintptr_t a;
	
	typedef std::numeric_limits< double > dbl;

	ptr.n = 7;
	ptr.f = 5.5f;
	ptr.d = 123456789012345;
	ptr.c = 'c';
	ptr.s = "qwerty";

	a = serialize(&ptr);
	std::cout << &ptr << "\n\n" ;
	raw = deserialize(a);
	
	
	std::cout << raw->n << std::endl;
	std::cout << raw->f << std::endl;
	std::cout.precision(dbl::digits10);
	std::cout << raw->d << std::endl;
	std::cout << raw->c << std::endl;
	std::cout << raw->s << std::endl;

	return(0);
}
