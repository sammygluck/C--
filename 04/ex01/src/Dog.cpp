#include "../incl/Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy), _brain(NULL)
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
        this->_type = copy._type;

        Brain* tempBrain = NULL;
        if (copy._brain)
            tempBrain = new Brain(*copy._brain);
        delete this->_brain;
        this->_brain = tempBrain;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}

