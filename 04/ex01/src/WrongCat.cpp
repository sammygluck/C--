#include "../incl/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miauw" << std::endl;
}
