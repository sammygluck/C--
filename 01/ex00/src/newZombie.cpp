#include "../incl/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *newOne;

    newOne = new Zombie(name);
    return (newOne);
}