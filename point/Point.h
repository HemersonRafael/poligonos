#ifndef POINT_H


#define POINT_H


class Point {
public:

    Point();
    Point(float,float);
    void setX(float x);
    void setY(float y);
    float getX();
    float getY();
    void add(Point p1);
    void sub(Point p1);
    void setXY(float x,float y);
    float norma();
    void translada(float x, float y);
    void imprime();

private:
    float x;
    float y;



};
#endif // POINT_H