#include <iostream>
#include "poligono.h"
#include <iomanip>
#include <cmath>
#define PI 3.14159
#define PRECISION 2

Poligono::Poligono(){
    contVertices = 0;
}

void Poligono::setVertice(float _x, float _y){
    vertices[contVertices].setXY(_x,_y);
    contVertices++;
}

float Poligono::getContVertices(){
    return (contVertices);
}

float Poligono::area(){

    float soma1 = 0;
    float soma2 = 0;
    float resultado;

    for(int i =0; i<contVertices; i++)
        soma1 += vertices[i].getX()*vertices[i+1].getY();

    soma1 += vertices[contVertices-1].getX()*vertices[0].getY();


    for(int i =0; i< contVertices; i++)
        soma2 += vertices[i+1].getX()*vertices[i].getY();


    soma2 += vertices[0].getX()*vertices[contVertices-1].getY();


    resultado = (soma1 - soma2)/2;

    if(resultado >= 0)
        return resultado;
    else
        return -resultado;

}
void Poligono::translada(float _a, float _b){
    for(int i=0; i<contVertices; i++){
        vertices[i].translada(_a,_b);
    }
}


void Poligono::rotacionar(float angulo){
    float x1, y1;
    angulo = (angulo * PI)/180;

    for(int i=0; i<contVertices; i++){
        x1 = (vertices[i].getX() * cos(angulo)) + (vertices[i].getY() * sin(angulo));
        y1 = (-vertices[i].getX() * sin(angulo)) + (vertices[i].getY() * cos(angulo));
        vertices[i].setXY(x1,y1);
    }
}

void Poligono::print(){

    for(int i=0 ; i<contVertices; i++){
        std::cout << "(" <<  std::setprecision(PRECISION) << vertices[i].getX() << "," << std::setprecision(PRECISION) << vertices[i].getY() << ")";
        std::cout << "-->";
    }
    std::cout << "(" <<  std::setprecision(PRECISION) << vertices[0].getX() << "," << std::setprecision(PRECISION) << vertices[0].getY() << ")" << std::endl;
}

