// Fichier cercle.hpp

#ifndef cercle_h
#define cercle_h

class cercle {
   // par défaut, tout est privé dans une "class"
   
   int x;
   int y;
   int l;
   int h;

   static int cpt;

 public:

  cercle();
  cercle(int a,int b,int c, int d);
  int getX();
  void setX(int x);
  int getY();
  void setY(int y);
  int getL();
  void setL(int l);
  int getH();
  void setH(int h);
  static int getCompteur();
  std::string toString();

};


#endif