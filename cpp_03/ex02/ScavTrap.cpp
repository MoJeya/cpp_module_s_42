/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:20:44 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/24 17:28:08 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: default consturctor was called "<< std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap: name constructor was called for: " << name << std::endl;
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;

}

ScavTrap::ScavTrap(ScavTrap &cp)
{
	std::cout << "ScavTrap Copy constructor has been called" << std::endl;
	*this = cp;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << this->_name << " Deconstructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap &cp)
{
	if (this != &cp)
		ClapTrap::operator=(cp);
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints != 0 || this->_HitPoints != 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << "," << 
			"causing " << this->_AttackDamage << " points of damage!" << std::endl; 
	}
	else
		std::cout << "No Energy left! "<< std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper Mode" << std::endl;
}


