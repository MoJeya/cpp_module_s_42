/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:00 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/29 17:55:48 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[34mAnimal: defaut constructor was called\033[0m" << std::endl;
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

}

Animal::~Animal()
{
	std::cout << "\033[32mAnimal\033[0m"<< ": " << "\033[34mdestructed\033[0m" << std::endl;
}