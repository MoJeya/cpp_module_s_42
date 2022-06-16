#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string _name;
    public:
        HumanB(const std::string& name);
        std::string getName();
        std::string getWeapon();
        void setWeapon(Weapon weapon);
        void attack();
};

#endif