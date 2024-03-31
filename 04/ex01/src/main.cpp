#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"

int main()
{
    Animal* animals[8];
    for (int i = 0; i < 4; ++i)
        animals[i] = new Cat();
    for (int i = 4; i < 8; ++i)
        animals[i] = new Dog();
    for (int i = 0; i < 8; ++i)
        delete animals[i];

    std::cout << std::endl;


    Cat *catA = new Cat();
    Cat *catB = new Cat(*catA);
    Cat *catC = new Cat();
    *catC = *catB;
    delete catA;
    delete catB;
    delete catC;

    std::cout << std::endl;


}