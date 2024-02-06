#include "../incl/Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon)
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

std::string Weapon::getType() const
{
    return (this->_type);
}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}

