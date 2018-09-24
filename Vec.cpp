#include "Vec.h"
#include "Punto.h"

Vec::Vec(double x, double y, double z) : x(x), y(y), z(z) {}
Vec Vec::operator + (const Vec& v) const { return Vec(x+v.x, y+v.y, z+v.z); }
//Vec Vec::operator * (double d) const{ return Vec(x*d, y*d, z*d); }
Vec Vec::operator / (double d) const { return Vec(x/d, y/d, z/d); }
double Vec::operator*(const Vec & v) const   // Producto escalar
{
	return ( x * v.x + y * v.y + z * v.z );
}
/*Vec Punto::operator - (const Punto& v)
{
	return ( Punto( x - v.x, y - v.y, z - v.z) );
}*/