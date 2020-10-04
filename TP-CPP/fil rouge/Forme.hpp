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
    int id;
    static int prochId;

    public:

    Forme();
    Forme(Point p, COULEURS couleur);
    ~Forme();
    static int prochainId();
    void setX(int a);
    void setY(int b);
    int getLargeur();
    int getHauteur();
    int getX();
    int getY();
    int getCompteur();
    int getId();
    void setCouleur(COULEURS c);
    COULEURS getCouleur();
    Point & getPoint();

};

#endif