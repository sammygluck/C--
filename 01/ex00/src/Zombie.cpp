#include "../incl/Zombie.hpp"


//constructor - destructor
Zombie::Zombie(std::string name) : _name(name)
{
    return ;   
}

Zombie::~Zombie()
{
    return ;
}

//private

//public
void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}