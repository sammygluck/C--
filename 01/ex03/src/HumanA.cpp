#include "../incl/Weapon.hpp"
#include "../incl/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}