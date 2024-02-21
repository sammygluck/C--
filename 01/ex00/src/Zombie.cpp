#include "../incl/Zombie.hpp"


//constructor - destructor
Zombie::Zombie(std::string name) : _name(name)
{
    return ;   
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has been shot in the head!!" << std::endl;
    return ;
}

//private

//public
void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}