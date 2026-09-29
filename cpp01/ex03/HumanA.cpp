#include "HumanA.hpp"


//lista de inicializacion:
HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){

}
HumanA::~HumanA() {}
void HumanA::attack(void) {
	//getType para traer el type
	std::cout << this->_name << " attacks with their " 
			  << this->_weapon.getType() << std::endl;
}

