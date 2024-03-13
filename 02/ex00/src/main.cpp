#include "../incl/Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    c.setRawBits(5);

    std::cout << c.getRawBits() << std::endl;
    
    return (0);
}