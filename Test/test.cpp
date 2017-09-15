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


void Retangulo::printTheStruct(){
    
    int r = largura -1 ;
    
   
    for(int j =0 ; j < altura; j++){
        
        if(!j || j == altura-1 ){
            for(int i = 0; i <largura; i++)
                std::cout << "*";
            std::cout << std::endl;
        }
        else         
            std::cout<< "*" << std::setw(r)<< "*" << std::endl; 
        
       
    }
    printf("\n");
    
       Poligono::print();
    
    
}



