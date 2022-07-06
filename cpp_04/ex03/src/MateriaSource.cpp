/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:24:06 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 18:56:25 by mjeyavat         ###   ########.fr       */
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
	std::cout << "MateriaSource: De -constructor was called " << std::endl;
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

std::string MateriaSource::getMateriaType(int idx)
{
	if (idx < 4)
		return (this->_inventory[idx]->getType());	
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
		// std::cout << "I: " << i << std::endl;
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


/**
 * 
class MateriaSource : public IMateriaSource {
	
	private:
		AMateria* _invertory[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource &m);
		const MateriaSource& operator=(MateriaSource &m);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};
*/
