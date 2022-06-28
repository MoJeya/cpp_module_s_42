#pragma once

#include "Animal.hpp"

class Dog : public Animal{

	private:

	public:
		Dog();
		Dog(Dog &d);
		Dog& operator=(Dog &d);
		virtual void makeSound();
		~Dog();
};