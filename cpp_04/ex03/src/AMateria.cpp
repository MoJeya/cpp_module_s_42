/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:29:24 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 12:28:38 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const & type): _mType(type) {}

AMateria::AMateria(AMateria &Am)
{
	*this = Am;
}

AMateria& AMateria::operator=(AMateria &Am)
{
	if (this != &Am)
		this->_mType = Am._mType;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_mType);
} //returns the materia type
		
AMateria::~AMateria()
{
	std::cout << "\033[31mAMateria\033[0m: De -constructor was called" << std::endl;	
}