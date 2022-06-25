/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:42:22 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/25 17:54:30 by mjeyavat         ###   ########.fr       */
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

Dog::~Dog()
{
	std::cout << "Dog: deconstructor called" << std::endl;
}

