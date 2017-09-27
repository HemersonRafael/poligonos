#include "retangulo.h"

Retangulo::Retangulo(float _x, float _y, float _largura, float _altura){
    _x = x;
    _y = y;
    _largura = largura;
    _altura = altura;
    Poligono::setVertice(_x,_y);
    Poligono::setVertice(_x,_y-_altura);
    Poligono::setVertice(_x+_largura,_y-_altura;
    Poligono::setVertice(_x+_largura,_y+_altura);
    
}
