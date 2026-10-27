#include "Point.hpp"

//constructor por defecto
Point::Point(void) : _x(), _y() {}
//constructor con float
Point::Point(const float x, const float y) : _x(x), _y(y) {}
//constructor de copia
Point::Point(const Point &other) : _x(other._x), _y(other._y) {}
//operador de asignacion
Point &Point::operator=(const Point &other) {
	if (this != &other) {
		// Los atributos son const, por lo que no se pueden modificar aquí.
		// Se deja vacío o se retorna *this según el estándar OCF.
	}
	return *this;
}
//destructor
Point::~Point(void) {}

//getters
Fixed const &Point::getX(void) const {
	return this->_x;
}
Fixed const &Point::getY(void) const {
	return this->_y;
}
