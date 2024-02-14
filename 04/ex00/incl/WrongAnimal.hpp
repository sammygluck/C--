#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& copy);

        std::string getType() const;
        void makeSound() const;
};

#endif