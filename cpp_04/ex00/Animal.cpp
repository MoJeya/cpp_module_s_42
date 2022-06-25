/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:26:57 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/25 18:04:59 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: defaut constructor was called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal &a)
{
	*this = a;
}

Animal& Animal::operator=(Animal &a)
{
	this->_type = a._type;
	return *this;
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType()
{
	return this->_type;
}

void Animal::makeSound()
{
	if (this->_type != "Animal")
	{
		if (this->_type == "Dog")
			std::cout << this->_type << " Barks " << std::endl;
		else if (this->_type == "Cat")
			std::cout << this->_type << " Purs " << std::endl;
	}
}

Animal::~Animal()
{
	std::cout << this->_type << ": " << "destructed" << std::endl;
}