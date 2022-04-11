/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:09:23 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 13:29:53 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
		// part 1
	std::cout << "\n\n----- Animal has not brain in general way: ------ " << std::endl ;
	Animal *anyAnimal = new Animal("Animal");
	std::cout << std::endl ;
	
	anyAnimal->makeSound();
	anyAnimal->setIdea("eat", 1);
	anyAnimal->setIdea("sleep", 3);
	anyAnimal->setIdea("walking", 5);
	anyAnimal->printIdeas(1, 6);
	
	std::cout << std::endl ;
	delete anyAnimal;

		// part 2
	std::cout << "\n\n----- Cat: -----\n";
	anyAnimal = new Cat("Cat");
	std::cout << std::endl ;
	
	anyAnimal->makeSound();
	anyAnimal->setIdea("eat", 1);
	anyAnimal->setIdea("sleep", 3);
	anyAnimal->setIdea("thinking", 5);
	anyAnimal->printIdeas(1, 6);
	
	std::cout << std::endl ;
	delete anyAnimal;
	
		// part 3
	std::cout << "\n\n----- Dog: -----\n";
	anyAnimal = new Dog("Dog");
	std::cout << std::endl ;
	
	anyAnimal->makeSound();
	anyAnimal->setIdea("eat", 1);
	anyAnimal->setIdea("sleep", 3);
	anyAnimal->setIdea("thinking", 5);
	anyAnimal->printIdeas(1, 6);
	std::cout << std::endl ;
	delete anyAnimal;

		// part 4
	std::cout << "\n\n----- Temporary Dog: -----\n";
	{
		Dog basic;
		std::cout << std::endl ;
		basic.makeSound();
		std::cout << std::endl ;
		
		basic.setIdea("eat", 1);
		basic.setIdea("sleep", 3);
		basic.setIdea("thinking", 5);
		
		{
			Dog tmp = basic;
			tmp.setIdea("run", 2);
		}
		std::cout << std::endl ;
		
		basic.printIdeas(1, 6);
		std::cout << std::endl ;
	}

		// part 5
	std::cout << "\n\n----- Dog through copy constructor: -----\n";
	Dog *Dog_1 = new Dog("Dog_1");
	Dog_1->setIdea("eat", 1);	
	Dog_1->setIdea("sleep", 3);
	Dog_1->setIdea("thinking", 5);
	std::cout << std::endl ;

	Animal *Dog_2 = new Dog(*Dog_1);
	std::cout << std::endl ;
	Dog_2->makeSound();
	Dog_2->printIdeas(1, 6);
	std::cout << std::endl ;
	
	delete Dog_1;
	std::cout << std::endl ;
	
	Dog_2->makeSound();
	Dog_2->printIdeas(1, 6);
	std::cout << std::endl ;
	delete Dog_2;
	std::cout << std::endl ;

	return(0);
}
