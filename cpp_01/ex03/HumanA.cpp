#include "HumanA.hpp"

HumanA::HumanA (const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

std::string HumanA::getName()
{
    return (this->name);
}

std::string HumanA::getWeapon()
{
    return (this->weapon.getTyp());
}

void HumanA::attack()
{
    std::cout << getName() << "attacks with their" << getWeapon() << '\n';
}




