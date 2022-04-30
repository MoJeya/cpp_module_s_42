#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>


class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string number;
		std::string darkestSecret;
		int searchID;
	public:
		void setName(std::string name);
		void setLastName(std::string lName);
		void setNickName(std::string nName);
		void setNumber(std::string num);
		void setDarkestSecret(std::string dSecret);
		void setSearchID(int index);
		std::string GetName(void);
		std::string GetLastName(void);
		std::string GetNickName(void);
		std::string GetNumber(void);
		std::string GetDS(void);
		int GetSearchID(void);
	
};


#endif
