#include "../incl/Fixed.hpp"

//default constructor
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//constructor with int parameter
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    //shifts the bits to the left by the number of fractional bits
    this->_value = value << this->_fractionalBits;
}

//constructor with float parameter
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    //roundf rounds to the nearest integer value
    this->_value = roundf(value * (1 << this->_fractionalBits));
}

//copy constructor
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//assignment operator overload
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
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

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    //shifts the bits to the right by the number of fractional bits
    return (this->_value >> this->_fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}




