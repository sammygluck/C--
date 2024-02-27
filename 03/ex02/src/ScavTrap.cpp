#include "../incl/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap: default constructor called" << std::endl;
    _hitPoints = 100; // Access the protected member variable directly
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap: constructor called" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
    std::cout << "ScavTrap: copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap: assignment operator overload" << std::endl;
    
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

// MEMBER FUNCTIONS

void ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot attack" << std::endl;
        return ;
    }
    else if  (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is out of energy and cannot attack" << std::endl;
        return ;
    }
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is already dead" << std::endl;
        return ;
    }
    unsigned int allowedDamage = amount;
    if (this->_hitPoints < amount)
        allowedDamage = this->_hitPoints;
    std::cout << "ScavTrap " << this->_name << " takes " << allowedDamage << " points of damage!" << std::endl;
    this->_hitPoints -= allowedDamage;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot be repaired" << std::endl;
        return ;
    }
    else if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is out of energy and cannot be repaired" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " is repaired for " << amount << " hitpoints!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}