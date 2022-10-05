//Led.h
#pragma once

#include <iostream>
#include <string>

#include "Yfirklasi.h"

class Led:public Yfirklasi {
    private:
        std::string litur;
    public:
        Led();
        Led(int numer, int staerd, std::string litur);
        void setlitur(std::string litur);
        std::string getlitur();
        void prenta();
};