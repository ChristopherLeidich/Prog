#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class cBruch(){
    private:
        int zaehl;
        int Nenner;
    public:
        cBruch(int z_in, int n_in){
            z_in = zaehl = 0; 
            n_in = Nenner = 1; 
            ausgabe();
        };

        void ausgabe(){
            cout << "Bruch: "<< zaehl<< "/"<< Nenner <<" (" << (double)zaehl/(double)Nenner<<")"<<endl;       
        };

        ~cBruch(){};
};

int main(){

    cBruch b1(7, 42);

    b1.ausgabe();

    return 0;
}