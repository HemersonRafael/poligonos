#include <iostream>
#include <poligono.h>
#include <cmath>

#define PI 3.14159265359

Poligono::Poligono(){
    contVertice = 0;
    debug = false;
  //  std::cout << "hellow poligono" <<std::endl;
}

void  Poligono::setAresta(Point a){
    vertice[contVertice] = a;
    contVertice++;
}

void Poligono::setAresta(float _x, float _y){
     vertice[contVertice].setXY(_x, _y);
    contVertice++;
}

int Poligono::getContVertice(){
    return contVertice;
}

void Poligono::translade(float a, float b){
    
    for( int i =0; i< contVertice; i++){
        vertice[i].translade(a,b);
    }
    
}

float Poligono::degreesToRadians(float theta){
        return  PI*theta/180;    
}

void Poligono::rotate(float theta){
    float x1;
    float y1;
    
    theta = degreesToRadians(theta);

    
    for(int i =0; i< contVertice; i++){
         x1 = vertice[i].getX()*cos(theta) + vertice[i].getY()*sin(theta);
         y1 = vertice[i].getY()*cos(theta) - vertice[i].getX()*sin(theta);
 
        vertice[i].setXY(x1,y1);
    }
    
    
}


float Poligono::area(){
    
    float soma1 = 0;
    float soma2 = 0;
    float resultado;
    
    for(int i =0; i<contVertice; i++)
        soma1 += vertice[i].getX()*vertice[i+1].getY();
         
    soma1 += vertice[contVertice-1].getX()*vertice[0].getY();
    
    if(debug)
        std::cout << soma1 <<std::endl;
    
    for(int i =0; i< contVertice; i++)
        soma2 += vertice[i+1].getX()*vertice[i].getY();
    
    
        soma2 += vertice[0].getX()*vertice[contVertice-1].getY();
    
    if(debug)
        std::cout << soma2 <<std::endl;
    
    resultado = (soma1 - soma2)/2;
    
    if(resultado >= 0)
        return resultado;
    else 
        return -resultado;
}

void Poligono::print(){
  
    
    for(int i =0 ; i <contVertice; i++){
        
        std::cout << "(" << vertice[i].getX() << "," <<vertice[i].getY() << ")";
        std::cout << "-->";
    }
   std::cout << "(" << vertice[0].getX() << "," <<vertice[0].getY() << ")";
    
}
    

void Poligono::setDebug(bool _debug){
    debug = _debug;
}