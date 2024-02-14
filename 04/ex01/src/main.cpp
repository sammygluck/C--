#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"

int main(void)
{
    std::cout << "----------------The right way: constructor----------------" << std::endl;
    Animal* elephant = new Animal();
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    std::cout << "----------------The right way: sounds----------------" << std::endl;

    elephant->makeSound();
    cat->makeSound();
    dog->makeSound();

    std::cout << "----------------The wrong way: constructor----------------" << std::endl;
    WrongAnimal* wrongAnimal = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << "----------------The wrong way: sounds----------------" << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();

    std::cout << "----------------The right way: destructor----------------" << std::endl;
    delete elephant;
    delete cat;
    delete dog;

    std::cout << "----------------The wrong way: destructor----------------" << std::endl;
    delete wrongAnimal;
    delete wrongCat;

    return (0);
}