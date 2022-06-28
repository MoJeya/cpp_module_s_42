#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	private:

	public:
		WrongCat();
		WrongCat(WrongCat &wr);
		WrongCat& operator=(WrongCat &wr);
		virtual void makeSound();
		~WrongCat();
};