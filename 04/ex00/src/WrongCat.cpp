#include "../incl/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong Miauw" << std::endl;
}
