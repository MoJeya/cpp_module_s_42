/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:38:33 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 14:17:29 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/CureMateria.hpp"

CureMateria::CureMateria(){
	std::cout << "\033[34mCureMateria\033[0m: Constructor was called" << std::endl;
	this->_mType = "cure";
}

AMateria* CureMateria::clone() const
{
	return new CureMateria();
}

void CureMateria::use(ICharacter& target)
{
	std::cout << std::endl;
	std::cout << "*\033[34m heals \033[0m" << target.getName() << "'s wounds *" << std::endl;
	std::cout << std::endl;
}

CureMateria::~CureMateria()
{
	std::cout << "\033[31m Cure\033[0m: De -constructor was called" << std::endl;
}
