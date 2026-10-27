#include "Point.hpp"

//utilizamos el metodo crosssing point que calcula pab, pbc, pca

//calcular de que lado esta el punto p respecto a la linea p1-p2
static Fixed getOrientation(Point const &p1, Point const &p2, Point const &point) {
	return (p2.getX() - p1.getX()) * (point.getY() - p1.getY()) - 
			(p2.getY() - p1.getY()) * (point.getX() - p1.getX());
}

static bool isOnEdgeOrVertex(Fixed o1, Fixed o2, Fixed o3) {
	//si es igual a 0 o esta sobre vertice o arista
	if (o1 == 0 || o2 == 0 || o3 == 0) {
		return true;
	}
	return false;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	//obtener orientacion del punto respecto del triangulo
	Fixed orientationAB = getOrientation(a, b, point);
	Fixed orientationBC = getOrientation(b, c, point);
	Fixed orientationCA = getOrientation(c, a, point);

	//chequea si esta al borde
	if (isOnEdgeOrVertex(orientationAB, orientationBC, orientationCA)) {
		return false;
	}
	//chequea que signos sean iguales
	bool allPositive = (orientationAB > 0 && orientationBC > 0 && orientationCA > 0);
	bool allNegative = (orientationAB < 0 && orientationBC < 0 && orientationCA < 0);
	//si todos los signos son iguales, el punto esta dentro 
	if (allPositive || allNegative) {
		return true;
	}
	return false;

}