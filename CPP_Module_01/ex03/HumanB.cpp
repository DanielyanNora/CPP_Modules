#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _weapon_type(NULL)
{
	_name = name;
}

void HumanB::setWeapon(Weapon &weapon_type)
{
	_weapon_type = &weapon_type;
}

void HumanB::attack(void) const
{
	std::cout << _name << " attacks with teir " << _weapon_type->getType() << std::endl;
}