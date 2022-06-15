#include "Weapon.hpp"

Weapon::Weapon(const std::string typ):_typ(typ){}

std::string Weapon::getTyp()
{
    return (this->_typ);
}

void Weapon::setType(const std::string typ)
{
    this->_typ = typ;
}

Weapon::~Weapon()
{
    std::cout << "\033[34mcdDESTRUCTED:\t\033[0m" << this->getTyp() << '\n';
}
