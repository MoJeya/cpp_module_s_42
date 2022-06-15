#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& weapon;
        const std::string name;
    public:
        HumanA (const std::string& name, Weapon& weapon);
        std::string getName();
        std::string getWeapon();
        void attack();
};
#endif