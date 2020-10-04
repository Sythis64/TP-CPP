#ifndef FORME_H
#define FORME_H

#include "Point.hpp"

enum class COULEURS {
  NOIR, BLANC, BLEU, VERT, ROUGE, JAUNE, VIOLET
};

class Forme {

    int l,h;
    static int nbFormes;
    Point p;
    COULEURS couleur;

    public:

    Forme();
    Forme(Point p, COULEURS couleur);
    ~Forme();
    void setX(int a);
    void setY(int b);
    int getCompteur();
    void setCouleur(COULEURS c);
    COULEURS getCouleur();
    Point & getPoint();

};

#endif