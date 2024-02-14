#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog& copy);
        virtual ~Dog();
        Dog& operator=(const Dog& copy);

        virtual void makeSound() const;
};


#endif