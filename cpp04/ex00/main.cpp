/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:54:40 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 14:09:20 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void NotVirtualMethod( void )
{
	const WrongAnimal* n = new WrongAnimal();
	const WrongAnimal* m = new WrongCat();
	const WrongCat h("Reference WrongCat");
	std::cout << std::endl;
	
	std::cout << n->getType() << " ---> " << " " ;
	n->makeSound();
	std::cout << m->getType() << " ---> " << " " ;
	m->makeSound();
	std::cout << h.getType() << " ---> " << " " ;
	h.makeSound();
	std::cout << std::endl;
	
	delete n;
	delete m;
}

void VirtualMethod( void )
{
	const Animal* i = new Animal();
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	std::cout << std::endl;
	
	std::cout << i->getType() << " ---> " << " " ;
	i->makeSound();
	std::cout << j->getType() << " ---> " << " " ;
	j->makeSound();
	std::cout << k->getType() << " ---> " << " " ;
	k->makeSound();
	std::cout << std::endl;
	
	delete i;
	delete j;
	delete k;	
}

int main( void )
{
	std::cout << "\n\n----- Virtual Method: -----" << std::endl;
	VirtualMethod();
	
	std::cout << "\n\n----- Not Virtual Method: -----" << std::endl;
	NotVirtualMethod();
	std::cout << std::endl;
	
	return(0);
}
