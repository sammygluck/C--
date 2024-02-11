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

//OPERATOR OVERLOADS
//1. comparison
bool Fixed::operator>(const Fixed& other) const
{
    return (this->_value > other._value);
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->_value < other._value);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->_value <= other._value);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->_value != other._value);
}

//2. arithmetic
Fixed Fixed::operator+(const Fixed& other) const
{
    return (Fixed(this->toFloat() + other.toFloat())); //double check this
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return (Fixed(this->toFloat() / other.toFloat())); //check for div by 0
}

//3. pre/post-increment/decrement
Fixed& Fixed::operator++(void)
{
    this->_value++;
    return *this;
}

Fixed& Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator++(int) //need to understand this
{
    Fixed temp(*this);
    this->_value++;
    return temp;
}

Fixed Fixed::operator--(int) //need to understand this
{
    Fixed temp(*this);
    this->_value--;
    return temp;
}


//4. assignment
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

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    //shifts the bits to the right by the number of fractional bits
    return (this->_value >> this->_fractionalBits);
}

//FUNCTION OVERLOADS

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a <= b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a <= b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a >= b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a >= b)
        return a;
    return b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}




