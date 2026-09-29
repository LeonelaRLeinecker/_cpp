#include "Weapon.hpp"
//lista de incializacion para guardadr tipo
Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon(void) {
}

//devuelve directamente el atributo_type sin copia
const std::string& Weapon::getType(void) const {
	return this->_type;
}

// setea valor de _type
void Weapon::setType(std::string type) {
	this->_type = type;
}
