#include "../incl/ClapTrap.hpp"
#include "../incl/ScavTrap.hpp"
#include "../incl/FragTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");
    FragTrap frag("Frag");

    clap.attack("target");
    clap.takeDamage(10);
    clap.beRepaired(5);
    std::cout << std::endl;

    scav.attack("target");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();
    std::cout << std::endl;

    frag.attack("target");
    frag.takeDamage(10);
    frag.beRepaired(5);
    frag.highFivesGuys();
    std::cout << std::endl;

    return (0);
}