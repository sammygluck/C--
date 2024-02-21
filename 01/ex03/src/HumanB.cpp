#include "../incl/Weapon.hpp"
#include "../incl/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(0)
{
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::setWeapon(Weapon& type)
{
    this->_type = &type;
}

void HumanB::attack()
{
    if (this->_type == 0)
    {
        std::cout << this->_name << " is defenseless. Quickly give him a weapon!" << std::endl;
        return;
    }
    std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}
