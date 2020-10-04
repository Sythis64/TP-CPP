#ifndef B_h
#define B_h

#include "A.hpp"
#include <iostream>

class A;

class B {

    int j;

    public:
    void send(A * pointeur);
    void exec(int entier);
    int get();
};



#endif