
#pragma once

#include <iostream>

class Animal{

	protected:
		std::string _type;
	
	public:
		Animal();
		//cpy
		Animal (Animal &a);
		
		Animal& operator=(Animal &a);
		
		void setType(std::string name);
		std::string getType();
		void makeSound();
		
		virtual ~Animal();

};
