#include "../incl/Zombie.hpp"

int main(void)
{
    //create normal
    Zombie test("me");
    test.announce();

    //create random
    randomChump("you");

    //create pointer
    Zombie* pointer = newZombie("them");
    pointer->announce();
    delete pointer;
}
