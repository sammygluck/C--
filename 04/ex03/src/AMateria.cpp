#include "../incl/AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
}

AMateria::AMateria(std::string type) : _type(type)
{
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria::~AMateria(void)
{
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

std::string const &AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    (void) target;
    std::cout << "NO USE" << std::endl;
}