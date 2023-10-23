#include <iostream>
#include <iomanip>

using namespace std;

#define k 555

class T{
    int i;
    
public:
    T(int i_in = 0){
        i = i_in;
    }
    // int operator++(int a){
    //     return a+k;
    // }  
    friend ostream& operator<<(ostream& out, const T& a);
};

ostream& operator<<(ostream& out, const T &a){
        out<<a;
        return out;
    }

int main(){

    T ab(1);

    // ab++;

    cout  <<    ab;


    return 0;
}