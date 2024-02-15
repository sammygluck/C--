#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& copy);
        virtual ~Animal();
        Animal& operator=(const Animal& copy);

        virtual std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif