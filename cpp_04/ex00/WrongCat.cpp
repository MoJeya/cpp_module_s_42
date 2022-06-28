/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:54 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 19:30:59 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\033[34mWrongCat: Default constructor was called\033[0m" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &wr)
{
	*this = wr;
}

WrongCat& WrongCat::operator=(WrongCat &wr)
{
	this->_type = wr.getType();
	return *this;
}

void WrongCat::makeSound()
{
	std::cout << this->_type << " Barks(Wrong Noise) " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "\033[32mWrongCat: deconstructor called\033[0m" << std::endl;
}


