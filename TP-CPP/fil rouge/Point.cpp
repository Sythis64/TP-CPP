#include <iostream>
#include <sstream>

#include "Point.hpp"


Point Point::ORIGINE;

Point::Point():
    x(0),
    y(0)
    {}

Point::Point(int a, int b):
    x(a),
    y(b)
    {}

void Point::setX(int a){
    x=a;
}

void Point::setY(int b){
    y=b;
}

int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}