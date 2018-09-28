#include "Punto.h"
Punto::Punto(): x(0), y(0), z(0)
{}
Punto::Punto(double n): x(n), y(n), z(n)
{}
Punto::Punto(double a, double b, double c) : x(a),y(b),z(c) {}
Punto::Punto(const Punto& p): x(p.x), y(p.y), z(p.z)
{}
Punto::~Punto()
{}
 Vec Punto::operator-(const Punto& p) const
{
	return(Vec( x - p.x, y - p.y, z - p.z) );
}