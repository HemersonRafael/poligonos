/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Retangulo.h
 * Author: samuel
 *
 * Created on 20 de Setembro de 2017, 08:18
 */

#ifndef RETANGULO_H
#define RETANGULO_H


#include <poligono.h>

class Retangulo : public Poligono {
public:
    Retangulo(float _x =0, float _y =0, float _largura = 1, float _altura =1){
    Poligono::setAresta(_x,_y);
    Poligono::setAresta(_x+_largura,_y);
    Poligono::setAresta(_x+_largura,_y+_altura);
    Poligono::setAresta(_x,_y+_altura);
    }
};



#endif /* RETANGULO_H */

