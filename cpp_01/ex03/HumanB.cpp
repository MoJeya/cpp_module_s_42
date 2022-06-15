#include "HumanB.hpp"

HumanB::HumanB(std::string& name): _name(name){}

std::string HumanB::getName()
{
    return (this->_name);
}

std::string HumanB::getWeapon()
{
    Weapon *w = this->weapon;
    return (w->getTyp());
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << getName() << "attacks with their" << getWeapon() << '\n';
}