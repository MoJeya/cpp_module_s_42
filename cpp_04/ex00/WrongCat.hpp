#pragma once

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{

	private:

	public:
		WrongCat();
		WrongCat(WrongCat &wr);
		WrongCat& operator=(WrongCat &wr);
		~WrongCat();
};