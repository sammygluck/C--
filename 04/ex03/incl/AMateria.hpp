#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(std::string type);
        AMateria(const AMateria &copy);
        virtual ~AMateria(void);
        AMateria &operator=(const AMateria &copy);

        std::string const &getType(void) const;

        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter &target);
};


#endif