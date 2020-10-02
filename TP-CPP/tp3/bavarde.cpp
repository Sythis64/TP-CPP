#include <iostream>
#include "bavarde.hpp"

Bavarde bizarre(1);

Bavarde::Bavarde():
    heu(0)
    {std::cout << "Construction de " << heu << std::endl;}

Bavarde::Bavarde(int a):
    heu(a)
    {std::cout << "Construction de " << heu << std::endl;}

Bavarde::~Bavarde() {
  std::cout << "Tais-toi " << heu << std::endl;
}  

int Bavarde::get() {
  return heu;
}

void Bavarde::afficher() {
    std::cout << "Affichage de " << heu << std::endl;
}

Couple::Couple():
    a(0),
    b(0)
    {std::cout << "Couple construit " << std::endl;}

Couple::Couple(int c,int d):
    a(c),
    b(d)
    {std::cout << "Couple construit " << std::endl;}

Famille::Famille():
    taille(-1),
    tableau(new Bavarde[0])
    {std::cout << "Famille construite " << std::endl;}

Famille::Famille(int a):
    taille(a),
    tableau(new Bavarde[a])
    {std::cout << "Famille construite " << std::endl;}

Famille::~Famille(){
    delete [] tableau;
    std::cout << "Famille détruite " << std::endl;
}

Mere::Mere()
{
    std::cout << "Ta mère est tellement grosse " << std::endl;
}

Mere::~Mere(){
    std::cout << "qu'elle est morte " << std::endl;
}

Fille::Fille():
    Mere()
{
    std::cout << "Ta fille est tellement fine " << std::endl;
}

Fille::~Fille(){

    std::cout << "qu'elle a disparu " << std::endl;
}

void Fille::test(){
    std::cout << heu << std::endl;
}