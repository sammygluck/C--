#include "../incl/Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Default Animal constructor called" << std::endl;
    this->_type = "Animal";
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "I'm an animal" << std::endl;
}