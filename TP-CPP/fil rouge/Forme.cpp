#include "Forme.hpp"

int Forme::nbFormes = 0;

Forme::Forme():
    l(0),
    h(0),
    p(Point::ORIGINE),
    couleur(COULEURS::BLEU)
    {
    nbFormes++;
}

Forme::Forme(Point poi, COULEURS coul):
    p(poi),
    couleur(coul)
    {
    nbFormes++;
}

Forme::~Forme(){
    nbFormes--;
}

int Forme::getCompteur(){
    return nbFormes;
}

void Forme::setCouleur(COULEURS c){
    couleur = c;
}

COULEURS Forme::getCouleur(){
    return couleur;
}

Point & Forme::getPoint(){
    return p;
}

void Forme::setX(int a){
    p.setX(a);
}

void Forme::setY(int b){
    p.setY(b);
}