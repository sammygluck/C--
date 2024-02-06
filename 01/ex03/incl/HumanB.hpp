#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "Weapon.hpp"

// class Weapon;

class HumanB
{
    private:
        std::string _name;
        Weapon* _type;
    public:
        HumanB(std::string name);
        ~HumanB();

        void setWeapon(Weapon& type);
        void attack();
};

#endif