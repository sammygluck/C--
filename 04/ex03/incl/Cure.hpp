#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure &copy);
        virtual ~Cure(void);
        Cure &operator=(const Cure &copy);

        virtual AMateria *clone(void) const;
        virtual void use(ICharacter &target);
};

#endif