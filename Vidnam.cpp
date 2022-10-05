//Vidnam.cpp
#include "Vidnam.h"

Vidnam::Vidnam(){
    this->vidnam = 0;
}

Vidnam::Vidnam(int numer, int staerd, int vidnam){
    this->vidnam = vidnam;
    this->setnumer(numer);
    this->setstaerd(staerd);
}

void Vidnam::setvidnam(int vidnam){
    this->vidnam = vidnam;
}

int Vidnam::getvidnam(){
    return this->vidnam;
}

void Vidnam::prenta(){
    std::cout 
    << "vidnam: " << this->vidnam << "ohms" << std::endl
    << "staerd: " <<this->getstaerd()       << std::endl
    << "numer: "  << this->getnumer()       << std::endl;
    std::cout << std::endl;
}
