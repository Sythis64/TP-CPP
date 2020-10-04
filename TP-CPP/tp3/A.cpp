#include <iostream>
#include "A.hpp"


void A::send(B * pointeur){
    pointeur->exec(3);
}

void A::exec(int entier){
    i=i+entier;
}

int A::get(){
    return i;
}