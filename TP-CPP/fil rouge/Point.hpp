#ifndef POINT_H
#define POINT_H

class Point{

    int x,y;

    public:

    static Point ORIGINE;

    Point();
    Point(int a, int b);
    void setX(int a);
    void setY(int a);
    int getX();
    int getY();

};

#endif