#include <test.h>
#include<iostream>
#include <iomanip>

Retangulo::Retangulo(float _x, float _y, float _largura, float _altura){
    
    largura = _largura;
    altura  = _altura;
    
    Poligono::setAresta(_x,_y);
    Poligono::setAresta(_x+_largura,_y);
    Poligono::setAresta(_x+_largura,_y+_altura);
    Poligono::setAresta(_x,_y+_altura);
    
  
}
