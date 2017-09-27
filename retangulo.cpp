#include "retangulo.h"

Retangulo::Retangulo(float _x, float _y, float _largura, float _altura){
    x = _x;
    y = _y;
    largura = _largura;
    altura = _altura;
    setVertice(_x,_y);
    setVertice(_x,_y-_altura);
    setVertice(_x+_largura,_y-_altura);
    setVertice(_x+_largura,_y);
    
}
