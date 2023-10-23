#include <iostream>
using namespace std;


template <class Flexible> void swapmeall (Flexible & obj1, Flexible & obj2) { // Funktions-Template
    Flexible helpme;
    helpme = obj2;
    obj2 = obj1;
    obj1 = helpme;
}

class cT1 {
        double x;
    public:
        cT1 (double x1 = 0.0) { x = x1; }

        void print (void) {
            cout << "cT1-Objekt Variable x: " << x << endl;
        }
};

int main() {
    int a = 11, b = 22;
    double t = 3.333, u = 4.444;

    cT1 v(56.8), w(67.9);

    // Int Variablen tauschen
    cout << "a = " << a << endl;
    swapmeall(a, b);
    cout << "a = " << a << endl;

    // Double Variablen tauschen
    cout << "t = " << t << endl;
    swapmeall(t, u);
    cout << "t = " << t << endl;

    // Klassen-Objekte tauschen
    v.print();
    swapmeall(v, w);
    v.print();

    return 0;
}