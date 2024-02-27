#include "../incl/ClapTrap.hpp"
#include "../incl/ScavTrap.hpp"

int main(void) {

    ClapTrap clap("ClapClap");
    ScavTrap scav("ScavScav");
    
    std::cout << "==================" << std::endl;
    ClapTrap *bsptr;
    ScavTrap derived;
    
    bsptr = &derived;
    bsptr->attack("TEST");
    std::cout << "==================" << std::endl;

    clap.attack("Someone");
    scav.attack("Someone else");
    scav.beRepaired(50);

    scav.takeDamage(160);

    scav.attack("Someone");
    scav.takeDamage(1);
    scav.guardGate();

}