#ifndef PUNTO_H
#define PUNTO_H
#include "Vec.h"
class Punto
{
    public:
    Punto();                                             // Constructor por defecto
    Punto(const double n);                                     // Constructor
    Punto(const double v_x,const double v_y,const double v_z);           // Constructor
    Punto(const Punto& p);
     Vec operator-(const Punto& p) const;                    // Constructor copia
    ~Punto();                                            // Destructor
    public:    
    double x, y, z;
};
#endif