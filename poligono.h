#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
#define MAX 100

/*!
 *  A classe Polígono foi criada para realizar o tratamento de polígonos.
 */
class Poligono{
private:
    Point vertices[MAX];
    int contVertices;
public:
    //! Inicializa o número de vertices com zero.
    Poligono();
    //! Definir um vertice do polígono. Assumindo que os vértices deverão ser inseridos conforme a sequência (anti-horária) em que figuram ao redor do polígono. As arestas do polígono serão então compostas pelos segmentos \f$(x_0,y_0)→(x_1,y_1)\f$, \f$(x_1,y_1)→(x_2,y_2)\f$ etc., com exceção da última aresta, que será formada pelo segmento \f$(x_{N−1},y_{N−1})→(x_0,y_0)..\f$
    void setVertice(float _x, float _y);
    //! Retorna o número de vertices inseridos.
    float getContVertices();
    //!Retorna o cálculo da área do polígono armazenado.
    float area();
    //! Translada o polígono armazenado
    void translada(float _a, float _b);
    //! Rotaciona o polígono armazenado.
    void rotacionar(float angulo);
    //!Imprimir a estrutura do polígino armazenado na forma \f$(x_0,y_0)→(x_1,y_1)→(x_2,y_2)→…\f$
    void print();


};

#endif // POLIGONO_H
