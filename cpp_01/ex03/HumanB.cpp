#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name){}

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
    std::cout << "\033[32m" <<  getName() << "\033[0m" << " attacks with their " << getWeapon() << '\n';
}