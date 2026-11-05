#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clapTrap("Juan Guapo");
	std::cout << "-------------------------------------------------" << std::endl;
	DiamondTrap diamondTrap("JuanDiamond");
	std::string target = "Juan Malo";
	std::cout << "-------------------------------------------------" << std::endl;
	diamondTrap.attack(target);
	diamondTrap.whoAmI();
	std::cout << "-------------------------------------------------" << std::endl;

	return 0;

}