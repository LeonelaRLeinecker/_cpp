#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;

	public:
	Point(void);//constructor defecto
	Point(const float x, const float y);//constructor con float
	Point(const Point &other);//cosntructor de copia
	Point &operator=(const Point &other);//operador de asignacion
	~Point(void);//destructor

	//getters
	Fixed const &getX(void) const;
	Fixed const &getY(void) const;
};
#endif