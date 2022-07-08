/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:57:07 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 14:11:47 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/IceMateria.hpp"
#include "../inc/ICharacter.hpp"

IceMateria::IceMateria()
{
	std::cout << "\033[34mIceMateria\033[0m: Constructor was called" << std::endl;
	this->_mType = "ice";
}

AMateria* IceMateria::clone() const 
{
	return new IceMateria();
}

void IceMateria::use(ICharacter& target)
{
	std::cout <<std::endl;
	std::cout << "*\033[31m shoots \033[0man ice bolt at " << target.getName() << " * " << std::endl;
	std::cout <<std::endl;

}

