/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:57:07 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 16:56:56 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/IceMateria.hpp"
#include "../inc/ICharacter.hpp"

IceMateria::IceMateria()
{
	this->_mType = "ice";
}

AMateria* IceMateria::clone() const {
	return new IceMateria();
}

void IceMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " * " << std::endl;
}

IceMateria::~IceMateria()
{
	std::cout << "Deconsturctor was called!" << std::endl;
}
