#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define NIL (VerketteteListe*)0

class VerketteteListe
{
private:
    int a;    // playload
    double x; // payload 2
    VerketteteListe *prev;

public:
    VerketteteListe(int a_in, double x_in, VerketteteListe *prev_in) : a(a_in), x(x_in), prev(prev_in)
    {
        cout << "Konstruktion Element mit a = " << a << " und x = " << x << endl;
    }

    ~VerketteteListe()
    {
        cout << "Destruktion Element mit a = " << a << " und x = " << x << endl;
    };
};


int main()
{

    VerketteteListe* p_act = new VerketteteListe(42, 1, 245, NIL);

    new VerketteteListe(-7, 456.9, p_act);

    delete p_act;

    return 0;
}