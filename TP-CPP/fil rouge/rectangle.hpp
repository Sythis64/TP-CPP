// Fichier rectangle.hpp

#ifndef rectangle_h
#define rectangle_h

class rectangle {
   // par défaut, tout est privé dans une "class"
   
   int x;
   int y;
   int l;
   int h;
   int ordre;

   static int cpt;

 public:

  rectangle();
  rectangle(int a,int b,int c, int d);
  int getX();
  void setX(int x);
  int getY();
  void setY(int y);
  int getL();
  void setL(int l);
  int getH();
  void setH(int h);
  int getOrdre();
  void setOrdre(int a);
  static int getCompteur();
  std::string toString();

};


#endif