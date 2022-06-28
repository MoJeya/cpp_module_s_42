/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:26:57 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/27 14:36:25 by mjeyavat         ###   ########.fr       */
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

}

Animal::~Animal()
{
	std::cout << this->_type << ": " << "destructed" << std::endl;
}