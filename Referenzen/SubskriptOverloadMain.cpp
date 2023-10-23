#include "SubskriptOverload.h"

int main(){
    try{
        IntArr iArr(10);

        for(int i = 0; i < 10; i++){
            iArr[i] = (i+1)*(i+1);
        }

        for(int i = 0; i < 10; i++){
            cout <<"iArr[" <<i << "] hat den Wert: "<< iArr[i]<<endl;
        }
    }
    catch(bad_alloc&){
        cout << "Caught bad Allocations Error" << endl;
        return ENOMEM;
    }
    catch(char * errstr){
        cout << "Caught Event: " << errstr << endl;
        return EXIT_FAILURE;
    }
    catch(...){
        cout << "Caught unknown Event" << endl;
        return 2;
    }

    return 0;
}