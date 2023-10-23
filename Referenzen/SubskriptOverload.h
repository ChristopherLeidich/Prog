#pragma once

#include <iostream>
#include <iomanip>
#include <cstdbool>
#include <strstream>

using namespace std;

class IntArr{
    int* p;
    int anz;
    bool expandArray(const int&);
public:
    IntArr(const int&);
    int& operator [] (const int&);
    ~IntArr();
};