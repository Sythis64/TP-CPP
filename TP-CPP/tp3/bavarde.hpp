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
    
    int heu;

    public:
    Mere();
    ~Mere();
};

class Fille : public Mere {

    public:
    Fille();
    ~Fille();
    void test();
};

#endif
