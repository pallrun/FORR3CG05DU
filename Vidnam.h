//Vidnam.h
#pragma once

#include <iostream>
#include <string>

#include "Yfirklasi.h"

class Vidnam:public Yfirklasi {
    private:
        int vidnam;
    public:
        Vidnam();
        Vidnam(int numer, int staerd, int vidnam);
        void setvidnam(int vidnam);
        int getvidnam();
        void prenta();
};