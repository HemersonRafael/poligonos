#include "point.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#define PRECISION 2

Point::Point(float _x, float _y){
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

float Point::getX(){
    return x;
}

float Point::getY(){
    return y;
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

void Point::translada(float _a , float _b){
    x = x + _a;
    y = y + _b;
}

void Point::imprime(){
    std::cout << "Point: (" << std::setprecision(PRECISION) << x << "," << std::setprecision(PRECISION) << y << ")" << std::endl;
}


