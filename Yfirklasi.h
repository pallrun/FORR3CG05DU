//Yfirklasi.h
#pragma once

#include <iostream>
#include <string>

class Yfirklasi {
    private:
        int numer;
        int staerd;
    public:
        Yfirklasi();
        Yfirklasi(int numer, int staerd);
        void setnumer(int numer);
        int getnumer();
        void setstaerd(int staerd);
        int getstaerd();
        virtual void prenta();
};