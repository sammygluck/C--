#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat& copy);
        virtual ~Cat(void);
        Cat& operator=(const Cat& copy);

        virtual void makeSound(void) const;
};


#endif