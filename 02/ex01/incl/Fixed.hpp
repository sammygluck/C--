#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits = 8;
    public:
        //constructors
        Fixed(void);
        Fixed(const int value);
        Fixed(const float value);
        //copy constructor
        Fixed(const Fixed& other);
        //assignment operator overload
        Fixed& operator=(const Fixed& other);
        //destructor
        ~Fixed(void);
        //public
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif