/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:23:37 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 18:43:58 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[34mWrongAnimal: defaut constructor was called\033[0m" << std::endl;
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

}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->_type << ": " << "\033[32mdestructed\033[0m" << std::endl;
}