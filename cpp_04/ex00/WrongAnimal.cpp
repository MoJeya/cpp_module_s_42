/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:23:37 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/25 18:28:53 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: defaut constructor was called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &a)
{
	*this = a;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &a)
{
	this->_type = a._type;
	return *this;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string WrongAnimal::getType()
{
	return this->_type;
}

void WrongAnimal::makeSound()
{
	if (this->_type != "WrongAnimal")
	{
		if (this->_type == "Dog")
			std::cout << this->_type << " Purs(Wrong Noise) " << std::endl;
		else if (this->_type == "WrongCat")
			std::cout << this->_type << " Barks(Wrong Noise) " << std::endl;
	}
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->_type << ": " << "destructed" << std::endl;
}