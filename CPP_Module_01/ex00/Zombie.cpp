#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << ": I am alive" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": I dont exist" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ" << std::endl;
}