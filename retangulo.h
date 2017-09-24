#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
/*!
 *  A classe Retangulo foi criada para realizar o tratamento de retangulos.
 */

class Retangulo: public Poligono{
public:
    //! Inicializa a posição \f$(x,y)\f$ e dimensões largura e altura do retangulo, caso os dados não forem informados assumiram o valor zero.
    Retangulo(float _x=0, float _y=0, float _largura=0, float _altura=0);
};

#endif // RETANGULO_H
