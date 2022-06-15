#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class Weapon
{
    private:
        const std::string _typ;
    public:
        Weapon(const std::string typ);
        void setType(const std::string typ);
        std::string getTyp();
        ~Weapon();
};

#endif