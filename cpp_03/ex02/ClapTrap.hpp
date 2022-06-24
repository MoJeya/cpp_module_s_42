/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:15:09 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/24 16:15:49 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _HitPoints;
		int _EnergyPoints;
		int _AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		
		//copy constructor
		ClapTrap(ClapTrap &cp); 
		
		ClapTrap& operator=(ClapTrap &cp);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		std::string getName();
		int getHitPoint();
		int getEnergyPoints();
		int getAttackDamage();

		void setName(std::string const name);
		void setHitPoint(int hPoints);
		void setEnergyPoints(int eP);
		void setAttackDamage(int aD);

		~ClapTrap(void);

};