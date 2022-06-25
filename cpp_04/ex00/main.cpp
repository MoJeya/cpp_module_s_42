#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* a1 = new Dog();
	Animal* a2 = new Cat();
	WrongAnimal *w1 = new WrongCat();
	std::cout <<"This animal is a1: "<<a1->getType() << std::endl;
	std::cout <<"This animal is a2: "<<a2->getType() << std::endl;
	std::cout <<"This animal is w1: "<<w1->getType() << std::endl;

	a1->makeSound();
	a2->makeSound();
	w1->makeSound();
	meta->makeSound();

	delete meta;
	delete a1;
	delete a2;
	delete w1;

	return(0);
}