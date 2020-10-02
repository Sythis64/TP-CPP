// Fichier cercle.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "cercle.hpp" // Inclusion d'un fichier du répertoire courant

int cercle::cpt =0;

cercle::cercle():
    x(0),
    y(0),
    l(0),
    h(0)
    {
    std::cout << "cercle" << std::endl;
    ++cpt;}


cercle::cercle(int a,int b,int c,int d):
    x(a),
    y(b),
    l(c),
    h(d)
    {
    std::cout << "cercle avec valeur" << std::endl;
    ++cpt;}

int cercle::getCompteur(){
    return cpt;
}

int cercle::getX() {
  return x;
}

void cercle::setX(int a){
    x=a;
}

int cercle::getY() {
  return y;
}

void cercle::setY(int a){
    y=a;
}

int cercle::getL() {
  return l;
}

void cercle::setL(int a){
    l=a;
}

int cercle::getH() {
  return h;
}

void cercle::setH(int a){
    h=a;
}

std::string cercle::toString(){
    return "CERCLE " +std::to_string(x)+" "+std::to_string(y)+" "+std::to_string(l)+" "+std::to_string(h);
}
