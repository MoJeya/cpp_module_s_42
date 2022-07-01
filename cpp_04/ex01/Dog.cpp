/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:42:22 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/01 16:53:37 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "\033[34mDog: Default constructor was called\033[0m" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
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
	std::cout << this->_type << " BARKS " << std::endl;
}

void Dog::setIdeas(Brain &b)
{
	this->brain = &b;
}

// std::string Dog::getIdea()
// {
// 	return (this->brain->getIdeas(0));
// }

Dog::~Dog()
{
	std::cout << "\033[32mDog: deconstructor called\033[0m" << std::endl;
	delete [] this->brain;
}


