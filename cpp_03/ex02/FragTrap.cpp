/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:52:50 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/24 17:26:36 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: default constructor was called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap: name constructor was called: "<< name << std::endl;
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap& FragTrap::operator=(FragTrap &cp)
{
	if (this != &cp)
		ClapTrap::operator=(cp);
	return *this;
}


void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap: HighFive has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: destructor is called" << std::endl;
}