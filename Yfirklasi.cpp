//Yfirklasi.cpp
#include "Yfirklasi.h"



Yfirklasi::Yfirklasi(){
    this->numer = 0;
    this->staerd = 0;
}

Yfirklasi::Yfirklasi(int numer, int staerd){
    this->numer = numer;
    this->staerd = staerd;
}

void Yfirklasi::setnumer(int numer){
    this-> numer = numer;
}

int Yfirklasi::getnumer(){
    return this->numer;
}

void Yfirklasi::setstaerd(int staerd){
    this-> staerd = staerd;
}

int Yfirklasi::getstaerd(){
    return this-> staerd;
}

void Yfirklasi::prenta(){
    std::cout 
    << "numer: "  << this->numer  << std::endl
    << "staerd: " << this->staerd << std::endl;
    std::cout << std::endl;
}
