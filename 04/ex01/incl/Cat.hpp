#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& copy);
        virtual ~Cat();
        Cat& operator=(const Cat& copy);

        //virtual std::string getType() const;
        virtual void makeSound() const;
};


#endif