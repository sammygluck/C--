#include "../incl/Zombie.hpp"


//constructor - destructor

//default constructor
Zombie::Zombie(): _name("Default")
{
    return ;
}

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