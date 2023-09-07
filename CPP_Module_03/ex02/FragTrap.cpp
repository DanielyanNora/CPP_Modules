#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attack = 30;
    _name = "FragTrap";
    std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attack = 30;
    std::cout << "FragTrap constructor with parameter" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap highFivesGuys" << std::endl;
}