#include "bavarde.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"

int main(int, char **) {
  
  // std::cout << "CHOUCROUTTE " << bizarre.get() << std::endl;
  // Couple a(1,2);
  // Famille(4);
  // Fille claude("claude");
  // Mere anna("anna");

  // std::cout << claude.getNom() << std::endl;
  // std::cout << anna.getNom() << std::endl;
  // claude.afficher();
  // anna.afficher();

  // Mere  *pm = new Mere("mere_dyn");
  // Fille *pf = new Fille("fille_dyn");
  // Mere  *pp = new Fille("fille vue comme mere");
  // pm->afficher(); // affiche Mere
  // pf->afficher(); // affiche Fille
  // pp->afficher(); // affiche Fille

  A una;
  B unb;
  std::cout << unb.get() << std::endl;
  una.send(&unb);
  std::cout << unb.get() << std::endl;


  return 0;
  
}