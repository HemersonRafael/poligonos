#include <iostream>
#include "retangulo.h"

int main(){

    Retangulo r(0,0,3,4);

    r.print();
    std::cout << "Area do retangulo: " << r.area() << std::endl;

    r.translada(-3,4);
    r.print();
    std::cout << "Area do retangulo: " << r.area() << std::endl;

    r.rotacionar(30);
    r.print();
    std::cout << "Area do retangulo: " << r.area() << std::endl;

    return (0);
}
