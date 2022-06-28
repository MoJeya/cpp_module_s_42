/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:31:09 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 12:34:02 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (const std::string& name, Weapon& weapon) : weapon(weapon), name(name) {}

std::string HumanA::getName()
{
    return (this->name);
}

std::string HumanA::getWeapon()
{
    return (this->weapon.getTyp());
}

void HumanA::attack()
{
    std::cout <<"\033[32m" << getName() << "\033[0m" << " attacks with their " << getWeapon() << '\n';
}




