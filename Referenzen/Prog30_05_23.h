#pragma once

#include <iostream>

using namespace std;

class cComplex{
    double re, im;
    friend ostream& operator << (ostream&, const cComplex&);
public:
    cComplex(const double&, const double&);

}

