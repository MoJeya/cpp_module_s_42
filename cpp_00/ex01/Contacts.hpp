#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>


class Contact
{
	private:
		std::string first_name;
		// const char *last_name;
		std::string number;
	public:
		void setName(std::string name);
		void setNumber(std::string num);
		std::string GetName();
		std::string GetNumber();
	
};


#endif
