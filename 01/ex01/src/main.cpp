#include "../incl/Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie* horde = Zombie::zombieHorde(N, "ZombieName");
    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
    }

    delete[] horde;

    return (0);
}