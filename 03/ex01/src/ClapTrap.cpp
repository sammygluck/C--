#include "../incl/ClapTrap.hpp"

// CANONICAL FORM
ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitpoints = copy._hitpoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

// MEMBER FUNCTIONS

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitpoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot attack" << std::endl;
        return ;
    }
    else if  (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot attack" << std::endl;
        return ;
    }
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
        return ;
    }
    unsigned int allowedDamage = amount;
    if (this->_hitpoints < amount)
        allowedDamage = this->_hitpoints;
    std::cout << "ClapTrap " << this->_name << " takes " << allowedDamage << " points of damage!" << std::endl;
    this->_hitpoints -= allowedDamage;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired" << std::endl;
        return ;
    }
    else if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot be repaired" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " hitpoints!" << std::endl;
    this->_hitpoints += amount;
    this->_energyPoints -= 1;
    // unsigned int allowedRepair = amount; //double check this
    // if (this->_hitpoints + amount > 10)
    //     allowedRepair = 10 - this->_hitpoints;
    // std::cout << "ClapTrap " << this->_name << " is repaired for " << allowedRepair << " hitpoints!" << std::endl;
    // this->_hitpoints += allowedRepair;

}

