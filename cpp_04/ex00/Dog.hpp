#pragma once

#include "Animal.hpp"

class Dog : virtual public Animal{

	private:

	public:
		Dog();
		Dog(Dog &d);
		Dog& operator=(Dog &d);
		~Dog();
};