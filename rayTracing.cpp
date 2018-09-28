#include <fstream>
#include <iostream>
#include "Utilitarios.h"
#include "Esfera.h"
using namespace std;
int main()
{
    int dpi = 72;
     int H = 500;
     int W = 500;
    int n = W * H;
    int thisone;
    ColorRGB* pixeles = new ColorRGB[n];

    const Esfera sphere(Punto(W*0.5, H*0.5, 50), 75);
  
    double t;
    for( int x= 0; x < W; x++)
    {
		for( int y = 0; y < H; y++)
		{
            thisone = y*W+x;
            pixeles[thisone].r = 0.0;
            pixeles[thisone].g = 0;
            pixeles[thisone].b = 0;
            const Rayo ray(Punto(x,y,0),Vec(0,0,1));
            if (sphere.intersect(ray, t)) {     
                pixeles[thisone].r = 1.0;
                pixeles[thisone].g = 1.0;
                pixeles[thisone].b = 0;
            }
		}    
    }
    savebmp("img.bmp", W, H, dpi, pixeles);
    return 0;
}