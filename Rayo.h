#include "Vec.h"
#include "Punto.h"
class Rayo
{
    public:
        Punto o;
        Vec d;
       Rayo(const Punto& o, const Vec& d) : o(o), d(d) {}
        Rayo(const Rayo& r) : o(r.o), d(r.d) {}

};