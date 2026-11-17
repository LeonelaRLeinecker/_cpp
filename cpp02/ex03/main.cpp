#include "Point.hpp"

int main() {
	//definimos triangulo con vertices
	Point const a (0.0f, 0.0f);
	Point const b (10.0f, 0.0f);
	Point const c (0.0f, 10.0f);
	//punto 1 dentro
	Point const inside(1.0f, 1.0f);
	//punto 2 fuera
	Point const outside(15.0f, 15.0f);
	//punto 3 borde
	Point const onEdge(5.0f, 0.0f);
	// testing
	std::cout << "-----test 1: inside, expect inside-----" << std::endl;
	if (bsp(a, b, c, inside))
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;
	std::cout << "-----test 2: outside, expect outside-----" << std::endl;
	if (bsp(a, b, c, outside))
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;
	std::cout << "-----test 3: on edge, expect outside-----" << std::endl;
	if (bsp(a, b, c, onEdge))
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;
	return 0;
}