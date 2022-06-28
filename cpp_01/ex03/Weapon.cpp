/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:33:18 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 12:33:35 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::Weapon(std::string typ):_typ(typ){}

std::string Weapon::getTyp()
{
    return (this->_typ);
}

void Weapon::setType(std::string typ)
{
    this->_typ = typ;
}

Weapon::~Weapon()
{
    std::cout << "\033[34mDESTRUCTED:\t\033[0m" << this->getTyp() << '\n';
}
