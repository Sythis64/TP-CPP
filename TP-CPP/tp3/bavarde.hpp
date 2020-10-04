#ifndef Bavarde_h
#define Bavarde_h

#include <iostream>

class Bavarde {

    private:

    int heu;

    public:

    Bavarde();
    Bavarde(int heu);
    ~Bavarde();
    int get();
    void afficher();

};  

extern Bavarde bizarre;

class Couple {

    Bavarde a;
    Bavarde b;

    public:
    Couple();
    Couple(int c, int d);
};

class Famille {
    
    int taille;
    Bavarde *tableau;

    public:
    Famille();
    Famille(int taille);
    ~Famille();
};

class Mere {
    
    static int nombreMere;
    std::string nom;

    public:
    Mere();
    Mere(std::string nom);
    ~Mere();
    std::string getNom();
    static int getCompteur();
    void afficher();
};

class Fille : public Mere {

    public:
    Fille();
    Fille(std::string nom);
    ~Fille();
    void afficher();
};

#endif
