#include <iostream>
#include <cstdio>
#include <cmath>


class Point{
private:
    float x, y;
public:
    Point(float _x, float _y);
    void setX(float _x);
    void setY(float _y);
    float getX(void);
    float getY(void);
    void setXY(float _x, float _y);
    Point add(Point p1);
    Point sub(Point p1);
    float norma();
    void translada(float a, float b);
    void imprime();
};

Point::Point(float _x = 0, float _y = 0){
    x = _x;
    y = _y;
}

void Point::setX(float _x){
    x = _x;
}

void Point::setY(float _y){
    y = _y;
}

void Point::setXY(float _x, float _y){
    x = _x;
    y = _y;
}


Point Point::add(Point p1){
    p1.x = x + p1.x ;
    p1.y = y + p1.y ;
    return p1;
}

Point Point::sub(Point p1){
    p1.x = x - p1.x;
    p1.y = y - p1.y ;
    return p1;
}
float Point::norma(){
    return ( sqrt((x * x) + (y * y)) );
}

void Point::translada(float a , float b){
    x = x + a;
    y = y + b;
}

void Point::imprime(){
    printf("Point (%3.2f , %3.2f)\n", x, y);
}

int main(){
    Point p, p1;
    p.imprime();

    p.setX(2);
    p.setY(1);
    p.imprime();

    p1.setXY(5,5);
    p1.imprime();

    p = p.add(p1);
    p.imprime();

    p = p.sub(p1);
    p.imprime();
    printf("norma = %3.2f\n",p1.norma());

    p1.translada(2,2);
    p1.imprime();

    std::cout << "hello " << std::endl;
}
