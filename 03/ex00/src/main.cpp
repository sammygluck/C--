#include  "../incl/ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("Bobby");
    ClapTrap c(b);

    a = ClapTrap("Alice");

    a.attack("Bobby");
    b.takeDamage(5);
    b.beRepaired(3);
    c.attack("Alice");
    c.takeDamage(5);
    c.beRepaired(3);

    return (0);
}