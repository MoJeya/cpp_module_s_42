#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor was called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &wr)
{
	*this = wr;
}

WrongCat& WrongCat::operator=(WrongCat &wr)
{
	this->_type = wr.getType();
	return *this;
}

void WrongCat::makeSound()
{
	std::cout << this->_type << " Barks(Wrong Noise) " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: deconstructor called" << std::endl;
}


