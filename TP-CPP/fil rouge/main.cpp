#include <iostream>
#include "rectangle.hpp"
#include "cercle.hpp"

int main(){
    rectangle r {1,2,3,4};
    std::cout << r.getX() << "  " << r.getY() << "  " << r.getL() << "  " << r.getH() << std::endl;
    std::cout << r.toString() << std::endl;
    cercle c {4,4,4,4};
    std::cout << c.getX() << "  " << c.getY() << "  " << c.getL() << "  " << c.getH() << std::endl;
    std::cout << c.toString() << std::endl;
    return 0;
}