/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:42:22 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/27 14:35:44 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor was called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog &d)
{
	*this = d;
}

Dog& Dog::operator=(Dog &d)
{
	this->_type = d.getType();
	return *this;
}

void Dog::makeSound()
{
	std::cout << this->_type << " Purs " << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: deconstructor called" << std::endl;
}


