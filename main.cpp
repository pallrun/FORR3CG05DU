//main.cpp
#include <iostream>
#include <string>

#include "listi.h"
#include "Detter.h"
#include "Led.h"
#include "Vidnam.h"
#include "Yfirklasi.h"

using namespace std;

int main() {
    Detter k = Detter(1, 1, 0.001);
    k.prenta();
    return 0;
}