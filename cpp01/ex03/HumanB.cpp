#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
	//para guardar la referencia recibida usamos el &
	this->_weapon = &weapon;
}
void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " 
			  << this->_weapon->getType() << std::endl;
}

