#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ":I dont exist" << std::endl;
}

void Zombie::set_name(std::string &name)
{
	this->_name = name;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ" << std::endl;
}