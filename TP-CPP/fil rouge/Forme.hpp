#ifndef FORME_H
#define FORME_H

#include <iostream> 
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
    virtual ~Forme();
    static int prochainId();
    virtual void setX(int a);
    virtual void setY(int b);
    virtual int getLargeur();
    virtual int getHauteur();
    virtual int getX();
    virtual int getY();
    int getCompteur();
    virtual int getId();
    virtual void setCouleur(COULEURS c);
    virtual void setHauteur(int a);
    virtual void setLargeur(int a);
    virtual COULEURS getCouleur();
    virtual Point & getPoint();
    virtual std::string toString() = 0;

};

#endif