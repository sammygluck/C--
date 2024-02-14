#include "../incl/Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain(); //not sure if this is correct
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (copy._brain)
        this->_brain = new Brain(*copy._brain);
    else
        this->_brain = nullptr;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        this->_type = copy._type;

        delete this->_brain;
        if (copy._brain)
            this->_brain = new Brain(*copy._brain);
        else
            this->_brain = nullptr;

    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miauw" << std::endl;
}

