#pragma once

#include "Animal.hpp"

class Cat : virtual public Animal{
	private:

	public:
		Cat();
		//cpy constructor
		Cat(Cat &c);
		Cat& operator=(Cat &c);
		~Cat();
};