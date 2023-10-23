#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

class complexT {
    double re, im;
    public:
    complexT (void) {re = im = 0.0;}
    complexT (double re_in) {re = re_in; im = 0.0;}
    complexT (double re_in, double im_in)
                {re = re_in; im = im_in;}

    friend bool IsZero(const complexT &c, double Epsilon=0.0001);
};

bool IsZero(const complexT &c, double Epsilon=0.0001){
    return((abs(c.re) <= Epsilon) && (abs(c.im <= Epsilon)));
};

void auswechsel(int &a, int &b){
    int help = a;

    a = b;
    b = help;
}

void inc(int &i){
    i++;
}

int main(){
    int i;
    int& j = i;
    int a = 1;
    int b = 10;

    inc (a);
    inc (b);
    inc (b);

    complexT c1 (0, 0), c2 (10, 11);
    bool v = IsZero (c1);
    bool k = IsZero (c2);


    i = 5;
    j++;

    cout << "Werte von a und b: " << a <<", "<< b << endl;
    cout << "i hat den Wert "<< i <<"."<< endl;
}