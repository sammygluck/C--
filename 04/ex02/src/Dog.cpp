#include "../incl/Dog.hpp"

Dog::Dog(): Animal(), _brain(new Brain())
{
    this->_type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy), _brain(nullptr)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (copy._brain)
        this->_brain = new Brain(*copy._brain);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        this->_type = copy._type;\
        delete this->_brain;
        if (copy._brain)
            this->_brain = new Brain(*copy._brain);
        else
            this->_brain = nullptr;
        return (*this);
    }
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}

