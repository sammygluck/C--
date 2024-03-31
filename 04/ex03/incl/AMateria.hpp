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
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &copy);

        std::string const &getType() const;

        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter& target);
};


#endif