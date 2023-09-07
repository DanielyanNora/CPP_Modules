#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clap("clap");
    FragTrap frag("frag");

    frag.highFivesGuys();
    frag.attack("clap");
    clap.attack("frag");
    frag.takeDamage(10);
    frag.beRepaired(10);

    return (0);
}