#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attack(0)
{
    _name = "uzbek";
    std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attack(0)
{
    std::cout << "ClapTrap constructor with parameter" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor of " << _name << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this != &copy)
    {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attack = copy._attack;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "There is no enough hit points" << std::endl;
        return;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "There is no enough energy" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _attack << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << " attacks and gets " << amount << " points" << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << _name << " repairs and gets " << amount << " points" << std::endl;
    _hitPoints += amount;
    _energyPoints--;
}