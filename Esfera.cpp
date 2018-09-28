#include "Esfera.h"

bool Esfera::intersect(const Rayo& ray, double &t) const
{
     Punto o = ray.o;
     Vec d = ray.d;
     Vec oc = o - c;

     double a = d * d;
     double b = 2 * (oc*d);
     double c = (oc)*(oc) - r * r;
     double disc = b*b - 4 *a* c;
    if (disc < 1e-4) return false;
    disc = sqrt(disc);
    const double t0 = -b - disc;
    const double t1 = -b + disc;
    t = (t0 < t1) ? t0 : t1;
    return true;
}