#include "../incl/Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
    {
        std::cout << i << std::endl;
        horde[i] = Zombie(name);
    }
    return horde;
}