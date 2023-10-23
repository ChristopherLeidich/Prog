#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class AT{
        int i;
    public:
        AT(int i_in = 0){
            i= i_in;
        }

        double operator()(double factor){
            return i*factor;
        }
        
};

int main(){
    AT a(15);

    double j=a(2.6);
    cout << "j = "<<j<<endl;

    return 0;
}
