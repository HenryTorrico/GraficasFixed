#ifndef VEC_H
#define VEC_H
#include <cmath>
//#include "Punto.h"
class Vec
{
    public:
    double x,y,z;
    Vec(double x, double y, double z);
    Vec operator + (const Vec& v) const; 
  
   // auto operator - (const auto& v) const; 
     //Vec operator * (double d) const; 
     Vec operator / (double d) const;
     double operator*(const Vec& _v) const;
};
#endif