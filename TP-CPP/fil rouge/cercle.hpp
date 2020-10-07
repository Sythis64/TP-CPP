// Fichier cercle.hpp

#ifndef cercle_h
#define cercle_h

class Point;

#include "Forme.hpp"


class Cercle : public Forme {
   // par défaut, tout est privé dans une "class"
   
   int ordre;

   static int nbCercle;

 public:
  Cercle(Point p = Point::ORIGINE, COULEURS c = COULEURS::BLEU);
  int getOrdre();
  void setOrdre(int a);
  static int getCompteur();
  std::string toString() override;
  int getRayon();
  void setRayon(int r);
};


#endif