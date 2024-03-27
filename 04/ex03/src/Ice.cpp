#include "../incl/AMateria.hpp"
#include "../incl/Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {

}

Ice::Ice(const Ice &copy)
{
    *this = copy;
}

Ice::~Ice(void)
{
}

Ice &Ice::operator=(const Ice &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

AMateria *Ice::clone(void) const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}