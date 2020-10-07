// Fichier Rectangle.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "rectangle.hpp" // Inclusion d'un fichier du répertoire courant

int Rectangle::nbRectangle =0;

Rectangle::Rectangle(Point p, COULEURS c):
  Forme(p,c)
    {
    std::cout << "Rectangle" << std::endl;
    ++nbRectangle;}



int Rectangle::getCompteur(){
    return nbRectangle;
}


int Rectangle::getOrdre(){
  return ordre;
}

void Rectangle::setOrdre(int a){
  ordre=a;  
}

std::string Rectangle::toString(){
  return "Rectangle";
}