#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice &copy);
        virtual ~Ice(void);
        Ice &operator=(const Ice &copy);

        virtual AMateria *clone(void) const;
        virtual void use(ICharacter &target);
};

#endif