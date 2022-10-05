//Led.cpp
#include "Led.h"

Led::Led(){
    this->litur = "";
}

Led::Led(int numer, int staerd, std::string litur){
    this->litur = litur;
    this->setnumer(numer);
    this->setstaerd(staerd);
}

void Led::setlitur(std::string litur){
    this->litur = litur;
}

std::string Led::getlitur(){
    return this->litur;
}

void Led::prenta(){
    std::cout 
    << "litur: "  <<this->litur             << std::endl
    << "staerd: " <<this->getstaerd()       << std::endl
    << "numer: "  <<this->getnumer()        << std::endl;
    std::cout << std::endl;
}
