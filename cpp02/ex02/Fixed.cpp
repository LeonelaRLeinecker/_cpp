#include "Fixed.hpp"

Fixed::Fixed(void) :_fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

//constructor desde int
Fixed::Fixed(const int param) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = param << _fractionalBits;
}
//constructor desde float
Fixed::Fixed(const float param) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(param * (1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Coppy assignment operator called" << std::endl;
	if (this != &other) {
		this->_fixedPointValue = other.getRawBits();
	}
	return (*this);
}
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}
//convertir a float 
float Fixed::toFloat(void) const {
	return (float)this-> _fixedPointValue / (1 << _fractionalBits);
}

//convertir a int
int Fixed::toInt(void) const {
	return this->_fixedPointValue >> _fractionalBits;
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
//sobrecarga del operado <<
std::ostream &operator<<(std::ostream &out, const Fixed &rhs) {
	out << rhs.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &other) const {
	return this->_fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const {
	return this->_fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &other) const {
	return this->_fixedPointValue >= _fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const {
	return this->_fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const {
	return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->_fixedPointValue != other._fixedPointValue;
}

//operadores aritmeticos
Fixed Fixed::operator+(const Fixed &other) const {
	return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed &other) const {
	return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed &other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

//pre-incremento (++a)
Fixed &Fixed::operator++(void) {
	this->_fixedPointValue++; //incremente el valor crudo en 1
	return *this; //devuelve el objeto actualizado por referencia
}

//post-incremento (a++)
Fixed Fixed::operator++(int) {
	Fixed temp(*this); //guarda copia del estado actual
	this->_fixedPointValue++; //incremente valor actual
	return temp; //devuelve copia con old value
}
//pre-decremento (--a)
Fixed &Fixed::operator--(void) {
	this->_fixedPointValue--; //decrementa el valor crudo
	return *this; //devuelve el objeto actualizado por referencia
}
//post-decremento (a--)
Fixed Fixed::operator--(int) {
	Fixed temp(*this); //guarda copia del estado actual
	this->_fixedPointValue--;//actualiza valor
	return temp; //devuelve old value;
}