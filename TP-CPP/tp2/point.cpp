// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "point.hpp" // Inclusion d'un fichier du répertoire courant

int Point::cpt =0;

Point::Point():
    x(0),
    y(0)
    {
    std::cout << "Point" << std::endl;
    ++cpt;}


Point::Point(int a,int b):
    x(a),
    y(b)
    {
    std::cout << "Point avec valeur" << std::endl;
    ++cpt;}

int Point::getCompteur(){
    return cpt;
}

int Point::getX() {
  return x;
}

void Point::setX(int a){
    x=a;
}

int Point::getY() {
  return y;
}

void Point::setY(int a){
    y=a;
}

void Point::deplacerDe(int a,int b){
    x+=a;
    y+=b;
}

void Point::deplacerVers(int a,int b){
    x=a;
    y=b;
}