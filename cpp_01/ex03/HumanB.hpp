#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        const std::string _name;
    public:
        HumanB(std::string& name);
        std::string getName();
        std::string getWeapon();
        void setWeapon(Weapon weapon);
        void attack();
};

#endif