// Fichier rectangle.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "rectangle.hpp" // Inclusion d'un fichier du répertoire courant

int rectangle::cpt =0;

rectangle::rectangle():
    x(0),
    y(0),
    l(0),
    h(0),
    ordre(0)
    {
    std::cout << "rectangle" << std::endl;
    ++cpt;}


rectangle::rectangle(int a,int b,int c,int d):
    x(a),
    y(b),
    l(c),
    h(d),
    ordre(0)
    {
    std::cout << "rectangle avec valeur" << std::endl;
    ++cpt;}

int rectangle::getCompteur(){
    return cpt;
}

int rectangle::getX() {
  return x;
}

int rectangle::getOrdre(){
  return ordre;
}

void rectangle::setOrdre(int a){
  ordre=a;  
}

void rectangle::setX(int a){
    x=a;
}

int rectangle::getY() {
  return y;
}

void rectangle::setY(int a){
    y=a;
}

int rectangle::getL() {
  return l;
}

void rectangle::setL(int a){
    l=a;
}

int rectangle::getH() {
  return h;
}

void rectangle::setH(int a){
    h=a;
}

std::string rectangle::toString(){
    return "RECTANGLE (" +std::to_string(x)+" "+std::to_string(y)+" "+std::to_string(l)+" "+std::to_string(h) +")";
}
