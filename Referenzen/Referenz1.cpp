#pragma once

#include <iostream>
using namespace std;


class cBruch(){
    private:
        int zaehl;
        int nenn;
    public:
        cBruch(int = 0, int = 0);
        void print();
        ~cBruch();
}