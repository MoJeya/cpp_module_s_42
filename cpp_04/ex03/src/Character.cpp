/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:14:09 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 18:47:42 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"
#include "../inc/ICharacter.hpp"

Character::Character() {}

Character::Character(std::string const & name) : _name(name) {
	std::cout << "Character: Constructor was called" << std::endl;
}

Character::Character(Character &CH)
{
	*this = CH;
}

const Character& Character::operator=(Character &CH)
{
	if (this != &CH)
		this->_name = CH._name;
	return *this;
}

std::string const & Character::getName() const {return this->_name;}

void Character::equip(AMateria* m)
{
	this->mat.learnMateria(m);
}

void Character::unequip(int idx)
{
	this->mat.dropFromInv(idx);
}

void Character::use(int idx, ICharacter& target)
{
	if (this->mat.getMateriaType(idx) == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	else if (this->mat.getMateriaType(idx) == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds "<< std::endl;
}

Character::~Character()
{
	std::cout << "Character: De -consturctor was called" << std::endl;
}


