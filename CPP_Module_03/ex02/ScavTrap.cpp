#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attack = 20;
    _name = "ScavTrap";
    std::cout << "Scavtrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attack = 20;
    std::cout << "ScavTrap constructor with parameter" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap guardGate" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "There is no enough hit points" << std::endl;
        return ;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "There is no enough erergy" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing"
    <<_attack << " points of damage!" << std::endl;
    _energyPoints--;
}