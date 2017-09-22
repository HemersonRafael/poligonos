#ifndef POINT_H
#define POINT_H

/*!
 *  A classe point foi criada para realizar o tratamento de pontos.
 */
class Point{

private:
    float x, y;

public:
    //! Inicializa o ponto com as coordenadas  \f$x\f$ e \f$y\f$ informadas, caso não seja informado as coordenadas do ponto elas inicializaram com zero.
    Point(float _x=0, float _y=0);
    //! Definir o valor da coordenada \f$x\f$ do ponto.
    void setX(float _x);
    //!Definir o valor da coordenada \f$y\f$ do ponto.
    void setY(float _y);
    //!Definindo o valores das coordenadas \f$x\f$ e \f$y\f$ do ponto.
    void setXY(float _x, float _y);
    //!Retorna o valor da coordenada \f$x\f$.
    float getX();
    //!Retorna o valor da coordenada \f$y\f$.
    float getY();
    //!Adiciona as coordenadas \f$(x,y)\f$ do ponto com as coordenadas de um ponto  \f$P1(x_1,y_1)\f$ fornecido, armazenando o resultado \f$(x+x_1,y+y_1)\f$ nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
    Point add(Point p1);
    //!Subtrai as coordenadas \f$(x,y)\f$ do ponto com as coordenadas de um ponto \f$P1(x_1,y_1)\f$ fornecido, armazenando o resultado \f$(x−x_1,y−y_1)\f$ nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
    Point sub(Point p1);
    //!Retorna o cálculo da distância do ponto para a origem do sistema de coordenadas.
    float norma();
    //!Translada o ponto \f$(x,y)\f$ de \f$(+a,+b)\f$, de modo que, após a execução do método, as coordenadas do ponto serão \f$(x+a,y+b)\f$.
    void translada(float _a, float _b);
    //!Imprime o ponto na forma \f$(x,y)\f$.
    void imprime();
};


#endif // POINT_H
