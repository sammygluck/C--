#include "../incl/Character.hpp"

Character::Character() : _name("default")
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
}

Character::Character(const Character &copy) : _name(copy._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._inventory[i])
            this->_inventory[i] = copy._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }    
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
        this->_name = other._name;
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

AMateria *Character::getMateria(int idx) const
{
    if (idx >= 0 && idx <= 3)
        return (this->_inventory[idx]);
    return (NULL);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return ;
        }
    }
    // delete m; //decided to do it differently
    std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        std::cout << "Invalid index" << std::endl;
    else if (this->_inventory[idx] == NULL)
        std::cout << "Empty slot" << std::endl;
    else
    {
        std::cout << this->getName() << " unequips " << this->_inventory[idx]->getType() << std::endl;
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    if (this->_inventory[idx] == NULL)
    {
        std::cout << "Empty slot" << std::endl;
        return;
    }
    else
    {
        std::cout << this->getName() << " uses " << this->_inventory[idx]->getType() << " on " << target.getName() << std::endl;
        this->_inventory[idx]->use(target);
    }
}