#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& copy);
        ~Animal();
        Animal& operator=(const Animal& copy);

        void makeSound() const;
};

#endif