/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:31:31 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 18:30:15 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void){}

HumanB::HumanB(const std::string& name) : _name(name){}

std::string HumanB::getName()
{
    return (this->_name);
}

Weapon HumanB::getWeapon()
{
    return (*this->weapon);
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << "\033[32m" <<  getName() << "\033[0m" << " attacks with their " << getWeapon().getTyp() << '\n';
}