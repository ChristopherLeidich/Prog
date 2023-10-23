#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

class Laptop{
    public:
        virtual double StromVerbrauchen(const int&) override = 0;
};