// Fichier Point.hpp

#ifndef point_h
#define point_h

class Point {
   // par défaut, tout est privé dans une "class"
   
   int x;
   int y;

   static int cpt;

 public:

  Point();
  Point(int a,int b);
  int getX();
  void setX(int x);
  int getY();
  void setY(int y);
  void deplacerDe(int dx,int dy);
  void deplacerVers(int x,int y);
  static int getCompteur();

};


#endif