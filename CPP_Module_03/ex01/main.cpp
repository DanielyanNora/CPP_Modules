#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("clap");
    ScavTrap scav("scav");

    scav.guardGate();
    scav.attack("clap");
    clap.attack("scav");
    scav.takeDamage(10);
    scav.beRepaired(10);
    
    return (0);
}