/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:40:07 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/23 20:35:20 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "HI IM ClapTrap: " << name << std::endl;
	this->_name = name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &cp)
{
	*this = cp;
}

ClapTrap& ClapTrap::operator=(ClapTrap &cp)
{
	this->_name = cp.getName();
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints != 0 || this->_HitPoints != 0)
	{
		this->_EnergyPoints -=1;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << "," << 
		"causing " << this->_AttackDamage << " points of damage!" << std::endl; 
	}
	else
		std::cout<< "No Energy Points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->_HitPoints = amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_EnergyPoints != 0 || this->_EnergyPoints != 0)
	{
		this->_EnergyPoints -=1;
		this->_HitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " got " << amount
		<< " of Hitpoints back!" << std::endl;
	}else
		std::cout << "No Energy Points left!" << std::endl;
}

std::string ClapTrap::getName(){
	return(this->_name);
}

int ClapTrap::getHitPoint(){
	return(this->_HitPoints);
}

int ClapTrap::getEnergyPoints(){
	return(this->_EnergyPoints);
}

int ClapTrap::getAttackDamage(){
	return(this->_AttackDamage);
}

void ClapTrap::setName(std::string name){
	this->_name = name;
}

void ClapTrap::setHitPoint(int hPoints){
	this->_HitPoints = hPoints;
}

void ClapTrap::setEnergyPoints(int eP){
	this->_EnergyPoints = eP;
}

void ClapTrap::setAttackDamage(int aD){
	this->_AttackDamage = aD;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructed" << std::endl;
}
