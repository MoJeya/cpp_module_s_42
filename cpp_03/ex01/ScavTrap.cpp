/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:20:44 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/23 20:34:06 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap constructor was called for " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << this->getName() << " Deconstructed" << std::endl;
}
