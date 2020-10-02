// Fichier main.cpp
#include <iostream>
#include "point.hpp"

int main(int, char**) {
  Point p {4,4};
  Point p2;
  Point * pp = new Point(42,42);
  std::cout << p.getX() << "  " << p.getY() << std::endl;
  p.setX(5);
  p.setY(3);
  std::cout << p.getX() << "  " << p.getY() << std::endl;
  p.deplacerDe(2,3);
  std::cout << p.getX() << "  " << p.getY() << std::endl;
  p.deplacerVers(4,4);
  std::cout << p.getX() << "  " << p.getY() << std::endl;
  std::cout << p.getCompteur() << "  " << Point::getCompteur() << std::endl;

  
  return 0;
}
