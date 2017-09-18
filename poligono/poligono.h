#ifndef POLIGONO_H

#include <Point.h>

#define POLIGONO_H

#define MAX 100

class Poligono {
public:
        
    Poligono();
    void setAresta( Point a);
    void setAresta(float x, float y);
    int getContVertice();
    void translade(float a, float b);
    void rotate(float theta);
    float area();
    void print();
    void setDebug(bool _debug);
    
    bool debug;
    
        Point vertice[MAX];
        int contVertice;       
        float degreesToRadians(float theta);
};




#endif // POLIGONO_H