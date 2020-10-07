// Fichier Cercle.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "cercle.hpp" // Inclusion d'un fichier du répertoire courant

int Cercle::nbCercle =0;

Cercle::Cercle(Point p, COULEURS c):
  Forme(p,c)
    {
    std::cout << "Cercle" << std::endl;
    ++nbCercle;}

int Cercle::getRayon() {
    return getLargeur() / 2;
}  

int Cercle::getCompteur(){
    return nbCercle;
}

void Cercle::setRayon(int r){
    setLargeur(2*r);
    setHauteur(2*r);
}


int Cercle::getOrdre(){
  return ordre;
}

void Cercle::setOrdre(int a){
  ordre=a;
}

std::string Cercle::toString(){
    return "Cercle";
    }
