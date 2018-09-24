#include "Esfera.h"

bool Esfera::intersect(const Rayo& ray, double &t)const {

    const Vec oc = ray.o - c;
    //double a = ray.d * ray.d;
    const double b = 2 * (ray.d*(ray.o -c));
    const double c = (ray.o-c)*(ray.o-c) - (r * r);
    double disc = b*b - 4 * c;
    if (disc < 1e-4) return false;
    disc = sqrt(disc);
    const double t0 = -b - disc;
    const double t1 = -b + disc;
    t = (t0 < t1) ? t0 : t1;
    return true;       
}