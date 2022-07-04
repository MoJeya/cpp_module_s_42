/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:29:24 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 19:54:49 by mjeyavat         ###   ########.fr       */
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

const AMateria& AMateria::operator=(AMateria &Am)
{
	if (this != &Am)
		this->_mType = Am._mType;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_mType);
} //returns the materia type
		
void AMateria::use(ICharacter& target)
{
	(void) target;
}

AMateria::~AMateria()
{
	std::cout << "AMateria deconstructor was called" << std::endl;	
}