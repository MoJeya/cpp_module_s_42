#pragma once

#include <iostream>

class WrongAnimal{

	protected:
		std::string _type;
	
	public:
		WrongAnimal();
		//cpy
		WrongAnimal (WrongAnimal &a);
		
		WrongAnimal& operator=(WrongAnimal &a);
		
		void setType(std::string name);
		std::string getType();
		void makeSound();
		
		virtual ~WrongAnimal();

};
