#include "retangulo.h"

Retangulo::Retangulo(float _x, float _y, float _largura, float _altura){
    Poligono::setVertice(_x,_y);
    Poligono::setVertice(_x+_largura,_y);
    Poligono::setVertice(_x+_largura,_y+_altura);
    Poligono::setVertice(_x,_y+_altura);
}
