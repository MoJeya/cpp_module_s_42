#pragma once

#include "Animal.hpp"

class Cat : public Animal{
	private:

	public:
		Cat();
		//cpy constructor
		Cat(Cat &c);
		Cat& operator=(Cat &c);
		virtual void makeSound();
		~Cat();
};