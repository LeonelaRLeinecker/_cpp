#include "FragTrap.hpp"

int main()
{
	ClapTrap clapTrap("Juan Guapo");
	FragTrap fragTrap("Juan 3.0");
	std::string target = "Juan Malo";

	clapTrap.attack(target);
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
	return 0;

}