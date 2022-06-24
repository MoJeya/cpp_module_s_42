
#pragma once

#include <iostream>

class Animal{

	protected:
		std::string _type;
	
	public:
		Animal();
		Animal(std::string const type);
		//cpy
		Animal (Animal &a);
		
		Animal& operator=(Animal &a);
		
		void setType(std::string name);
		std::string getType();
		
		~Animal();

};
