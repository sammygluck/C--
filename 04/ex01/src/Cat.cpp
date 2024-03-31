#include "../incl/Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy), _brain(NULL)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (copy._brain)
        this->_brain = new Brain(*copy._brain);
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

        Brain* tempBrain = NULL;
        if (copy._brain)
            tempBrain = new Brain(*copy._brain);
        delete this->_brain;
        this->_brain = tempBrain;
    }
    return *this;
}


void Cat::makeSound() const
{
    std::cout << "Miauw" << std::endl;
}

