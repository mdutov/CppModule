#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
		std::cout << "\n\n----- part 1 -----\n" ;
	// Animal *anyAmimal = new Animal("Animal")

		std::cout << "\n\n----- part 2 -----\n" ;
	Cat *anyCat = new Cat("Cat");
	std::cout << std::endl ;

	anyCat->makeSound();
	anyCat->setIdea("eat", 1);
	anyCat->setIdea("sleep", 3);
	anyCat->setIdea("thinking", 5);
	anyCat->printIdeas(1, 6);
	std::cout << std::endl ;

	delete anyCat;
	
		std::cout << "\n\n----- part 3 -----\n" ;
	Dog *anyDog = new Dog("Dog");
	std::cout << std::endl ;

	anyDog->makeSound();
	anyDog->setIdea("eat", 1);
	anyDog->setIdea("sleep", 3);
	anyDog->setIdea("thinking", 5);
	anyDog->printIdeas(1, 6);
	std::cout << std::endl ;
	
	delete anyDog;
	std::cout << std::endl ;

	return(0);	
}
