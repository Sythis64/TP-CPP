// Fichier Rectangle.hpp

#ifndef Rectangle_h
#define Rectangle_h

class Point;

#include "Forme.hpp"


class Rectangle : public Forme {
   // par défaut, tout est privé dans une "class"
   
   int ordre;

   static int nbRectangle;

 public:
  Rectangle(Point p = Point::ORIGINE, COULEURS c = COULEURS::BLEU);
  int getOrdre();
  void setOrdre(int a);
  static int getCompteur();
  std::string toString() override;

};


#endif