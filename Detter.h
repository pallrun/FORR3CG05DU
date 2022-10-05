//Detter.h
#pragma once
//detter er þéttir nota ekki islenskt lykklaborð
#include <iostream>
#include <string>

#include "Yfirklasi.h"

class Detter:public Yfirklasi {
    private:
        float rymd;
    public:
        Detter();
        Detter(int numer, int staerd, float rymd);
        void setrymd(float rymd);
        float getrymd();
        void prenta();
};