#include <iostream>
#include "B.hpp"

void B::send(A * pointeur){
    pointeur->exec(3);
}

void B::exec(int entier){
    j=j+entier;
}

int B::get(){
    return j;
}