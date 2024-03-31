#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character &copy);
        virtual ~Character();
        Character &operator=(const Character &copy);

        std::string const &getName() const;
        AMateria *getMateria(int idx) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif