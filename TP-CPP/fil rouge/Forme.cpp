#include "Forme.hpp"

int Forme::nbFormes = 0;

int Forme::prochId =0;

int Forme::prochainId(){
    return prochId;
}
Forme::Forme():
    l(0),
    h(0),
    p(Point::ORIGINE),
    couleur(COULEURS::BLEU),
    id(Forme::prochainId())
    {
    nbFormes++;
    ++prochId;
}

Forme::Forme(Point poi, COULEURS coul):
    p(poi),
    couleur(coul),
    id(Forme::prochainId())
    {
    nbFormes++;
    ++prochId;
}

Forme::~Forme(){
    nbFormes--;
}

int Forme::getId(){
    return id;
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
int Forme::getLargeur(){
    return l;
}
int Forme::getHauteur(){
    return h;
}
void Forme::setHauteur(int r){
    h=r;
}
void Forme::setLargeur(int r){
    l=r;
}
int Forme::getX(){
    return p.getX();
}
int Forme::getY(){
    return p.getY();
}