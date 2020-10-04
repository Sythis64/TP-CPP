#ifndef A_h
#define A_h

#include "B.hpp"
#include <iostream>

class B;

class A {

    int i;

    public:
    void send(B * pointeur);
    void exec(int entier);
    int get();
};



#endif