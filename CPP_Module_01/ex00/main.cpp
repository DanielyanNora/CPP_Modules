#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump( std::string name );

int main(void)
{
	Zombie	*z1;

	z1 = newZombie("Zombie2 from heap");
	z1->announce();

	randomChump("Zombie1 from stack");

	delete (z1);
	return (0);
}