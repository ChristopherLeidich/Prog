#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class AT {
    int j, k;
protected:
    int i;
public:
    void Doit (void);
};

class BT : private AT{
    double x, y;
public:
    void Calculate (double arg1, int arg2);
};

int main(){
    BT b;

    b.Calculate(3.1415,1);
    
    return 0;
}