#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("Juan Guapo");
	std::string target = "Juan Malo";


	clapTrap.attack(target);
	clapTrap.takeDamage(2);
	clapTrap.beRepaired(1);
	return 0;	
}