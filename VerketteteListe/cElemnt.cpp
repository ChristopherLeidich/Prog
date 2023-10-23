#include <iostream>
using namespace std;

class cElement(){
private:
    int a;
    double x;
    cElement* prev;
public:
    cElement(int a_in, double x_in, cElement* p_in);
    cElement* newElement(int, double);
    void PrintList();
    ~cElement();
    }

}