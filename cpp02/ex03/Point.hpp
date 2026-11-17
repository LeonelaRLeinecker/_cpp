#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>

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
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif