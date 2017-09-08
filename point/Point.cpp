#include <Point.h>
#include <iostream>
#include <cmath>

 Point::Point(){
     x = 0;
     y = 0;
 }
 Point::Point(float x, float y){
     this->x = x;
     this->y = y;
 }

void  Point::imprime(){
    
    printf("x: %3.2f y: %3.2f\n",x,y);
    
}

void Point::setX(float _x){
    x = _x;
}
float Point::getX(){
    return x;
}

void Point::setY(float _y){
    y = _y;
}

float Point::getY(){
    return y;
}

void Point::add(Point p1){
    x += p1.x;
    y += p1.y;
    
    
}

void Point::sub(Point p1){
    x -= p1.x;
    y -= p1.y;
    
    
}


void Point::setXY(float _x, float _y){
    x = _x;
    y = _y;
   
}


float Point::norma(){
    return std::sqrt( (x*x) + (y*y) );
}


void Point::translada(float _x, float _y){
    x += _x;
    y += _y;
}
