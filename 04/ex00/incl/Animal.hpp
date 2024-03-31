#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(const Animal& copy);
        virtual ~Animal(void);
        Animal& operator=(const Animal& copy);

        virtual std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif