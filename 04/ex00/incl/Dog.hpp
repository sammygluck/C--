#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog& copy);
        virtual ~Dog(void);
        Dog& operator=(const Dog& copy);

        virtual void makeSound(void) const;
};


#endif