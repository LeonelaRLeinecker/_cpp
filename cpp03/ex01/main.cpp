#include "ScavTrap.hpp"

int main() {
	ClapTrap clapTrap("Juan Guapo");
	ScavTrap scavTrap("Juan 2.0");
	std::string target = "Juan Malo";


	clapTrap.attack(target);
	clapTrap.takeDamage(2);
	clapTrap.beRepaired(1);
	return 0;	
}