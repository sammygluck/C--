#include "../incl/Fixed.hpp"

//default constructor
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//assignment operator overload
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _value = other.getRawBits();
    return *this;
}

//public

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}





