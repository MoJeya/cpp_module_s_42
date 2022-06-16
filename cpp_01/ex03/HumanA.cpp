#include "HumanA.hpp"

HumanA::HumanA (const std::string& name, Weapon& weapon) : weapon(weapon), name(name) {}

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
    std::cout <<"\033[32m" << getName() << "\033[0m" << " attacks with their " << getWeapon() << '\n';
}




