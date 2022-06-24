#include "Dog.hpp"

int main()
{
	Animal *a1 = new Dog();
	
	std::cout <<"This animal is a: "<<a1->getType() << std::endl;
	a1->makeSound();

	return(0);
}