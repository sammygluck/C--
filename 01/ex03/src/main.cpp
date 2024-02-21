#include "../incl/HumanA.hpp"
#include "../incl/HumanB.hpp"

int main(void)
{
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);

        bob.attack();
        club.setType("some other type of club");
        bob.attack();


        HumanB jim("Jim");
        Weapon sword("sharp two-edged sword");
        jim.attack();
        jim.setWeapon(sword);
        jim.attack();
        sword.setType("some other type of sword");
        jim.attack();

    return (0);
}