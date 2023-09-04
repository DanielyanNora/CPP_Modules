#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int n;
	Zombie *zombie_horde;

	std::cout << "n = ";
	std::cin >> n;
	zombie_horde = zombieHorde(n, "Zombiee");
	for(int i = 0; i < n; i++)
		zombie_horde[i].announce();

	delete[] zombie_horde;
	return (0);
}