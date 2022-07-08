/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:24:06 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 14:33:06 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/IceMateria.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource: Default Constructor was called" << std::endl;
}		

MateriaSource::~MateriaSource()
{
	std::cout << "\033[31mMateriaSource\033[0m: De -constructor was called " << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &m)
{
	*this = m;
}

void MateriaSource::dropFromInv(int idx)
{
	if (idx < 4)
		this->_inventory[idx] = nullptr;
}

AMateria* MateriaSource::getMateriaType(int idx)
{
	if (idx < 4)
		return (this->_inventory[idx]);	
	return 0;
}

const MateriaSource& MateriaSource::operator=(MateriaSource &m)
{
	if (this != &m)
	{
		for(int i = 0; i < 4; i++)
			this->_inventory[i] = m._inventory[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{

	for(int i = 0; i < 4; i++)
	{

		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;	
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == this->_inventory[i]->getType())
			return (this->_inventory[i]);
	}
	return 0;
}

