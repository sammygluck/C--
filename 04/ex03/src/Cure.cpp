#include "../incl/AMateria.hpp"
#include "../incl/Cure.hpp"

#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
}

Cure::~Cure(void)
{
}

Cure &Cure::operator=(const Cure &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

AMateria *Cure::clone(void) const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
}