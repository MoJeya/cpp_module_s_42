/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:14:43 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/25 17:53:59 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat counstructor was called" << std::endl;
	this->_type = "Cat";
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

Cat::~Cat()
{
	std::cout << "CAT: deconstructor was called" << std::endl;
}
