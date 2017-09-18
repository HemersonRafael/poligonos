#include <Point.h>
#include <poligono.h>
#include <test.h>
//#include <retangulo.h>
#include <iostream>

using namespace std;

int main() {
 
    Point p1(4,10);
    Point p2(2,2);
    Point p3(11,2);
    Point p4(9,7);
   // Point p5(4,2);
    
    
    Poligono triangulo;
    
    triangulo.setAresta(4,10);
    triangulo.setAresta(2,2);
    triangulo.setAresta(11,2);
    triangulo.setAresta(9,7);
    
   //std::cout <<   triangulo.area() <<std::endl;
   
   //triangulo.print();
   
    
    Retangulo teste (0,0,5,5);
   
    teste.translade(2,2);
    
   // teste.setDebug(true);
    
    
    teste.rotate(45);
    
    teste.print();
    
   
    
   
   
   
   
    
      
    
    
}
