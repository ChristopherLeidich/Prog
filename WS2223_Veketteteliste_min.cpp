// Descr.:C++ Demoprogramm fuer eine verkettete Liste
// Date:    22.11.2022

#include <iostream>
using namespace std;

class cElement {
        int a;
        double b;
        cElement* prev;
    public:
        cElement(int a_in, double b_in, cElement* p_in) : a(a_in), b(b_in), prev(p_in){
            cout << "Konstruktion Elemnet miz a = " << a << ", b = " << b <<endl;
        }
        ~cElement(){
            if(prev != NULL){
                delete prev;
            }
            cout << "Dekonstuktion Element mit a = " << a <<", b = " << b <<endl;
        }
};

int main(){
    cElement* p_act = new cElement(17,123.4,NULL);

    p_act = new cElement(42, 0.4567, p_act);
    p_act = new cElement(-237, 1.249, p_act);

    delete p_act;

    return 0;
}