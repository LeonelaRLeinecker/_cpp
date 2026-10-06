#include "Fixed.hpp"

//constructor por defecto
Fixed::Fixed(void) : _fixedPointValue(0) {
	std::cout << "---Default cosntructor called---" << std::endl;
}
//cosntructor copia
Fixed::Fixed(const Fixed &other) {
	std::cout << "---Copy cosntructor called---" << std::endl;
	*this = other; //operador de asignacion para copiar datos
}
//operador de asinacion
Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "---Copy assignment operator called---" << std::endl;
	if (this != &other) { //evita autoasignacion
		this->_fixedPointValue = other.getRawBits();
	}
	return *this; //devuelve referencia al objeto actual (*this)
}
//destructor
Fixed::~Fixed(void) {
	std::cout << "---Destructor called---" << std::endl;
}

//getter
int Fixed::getRawBits(void) const {
	std::cout << "---getRawBits called---" << std::endl;
	return this->_fixedPointValue;
}
//setter
void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}
