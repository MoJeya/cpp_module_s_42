/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:14:43 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 17:10:01 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[34mCat\033[0m : CONSTRUCTOR WAS CALLED" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain("Sleep");
}

Cat::Cat(Cat &c)
{
	*this = c;
}

Cat& Cat::operator=(Cat &c)
{
	this->_type = c._type;
	return *this;
}

void Cat::makeSound()
{
	std::cout << this->_type << " Purs " << std::endl;
}

std::string Cat::getIdea()
{
	return (this->brain->getIdeas(0));
}

Cat::~Cat()
{
	std::cout << "\033[32mCAT\033[0m : DECONSTRUCTOR WAS CALLED" << std::endl;
	delete this->brain;
}
