#pragma once

#include <iostream>


class ClapTrap
{
	private:
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

		void setName(std::string name);
		void setHitPoint(int hPoints);
		void setEnergyPoints(int eP);
		void setAttackDamage(int aD);

		~ClapTrap(void);

};