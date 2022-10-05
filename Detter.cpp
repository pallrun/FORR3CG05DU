//Detter.cpp
#include "Detter.h"
//detter er þéttir nota ekki islenskt lykklaborð
Detter::Detter(){
    this->rymd = 0;
}

Detter::Detter(int numer, int staerd, float rymd){
    this->rymd = rymd;
    this->setnumer(numer);
    this->setstaerd(staerd);
}

void Detter::setrymd(float rymd){
    this->rymd = rymd;
}

float Detter::getrymd(){
    return this->rymd;
}
// eg hlit að fa viðurkenningu fyrir fallegasta coðan hahahahahaha
void Detter::prenta(){
    if(this->rymd <= 0){
        std::cout 
        << "rymd: er 0µF"                          << std::endl 
        << "staerd: " << this->getstaerd()         << std::endl
        << "numer: "  << this->getnumer()          << std::endl;
    } else if(this->rymd < 0.001) {
        std::cout 
        << "rymd: "   << this->rymd*1000000 <<"µF" << std::endl
        << "staerd: " << this->getstaerd()         << std::endl
        << "numer: "  << this->getnumer()          << std::endl;
    } else if(this->rymd < 1) {
        std::cout 
        << "rymd: "   << this->rymd*1000 << "mF"   << std::endl
        << "staerd: " << this->getstaerd()         << std::endl
        << "numer: "  << this->getnumer()          << std::endl;
    } else {
        std::cout 
        << "rymd: "   << this->rymd                << std::endl
        << "staerd: " << this->getstaerd()         << std::endl
        << "numer: "  << this->getnumer()          << std::endl;
    }
    std::cout << std::endl;
}
