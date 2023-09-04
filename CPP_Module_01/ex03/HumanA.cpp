#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &Weapon_type) : _weapon_type(Weapon_type)
{
	this->_name = name;
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks whit their " << _weapon_type.getType() << std::endl;
}