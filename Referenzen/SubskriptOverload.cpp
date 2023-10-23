#include "SubskriptOverload.h"


bool  IntArr::expandArray(const int& neuAnz){

    int* p_help = new int[neuAnz];
    if(!p_help){
        return false;
    }
    
    for(int i = 0; i < anz; i++){
        p_help[i] = p[i];
    }

    for(int i = anz; i < neuAnz; i++ ){
        p_help[i] = 0;
    }

    delete[] p;

    p = p_help;
    anz = neuAnz;

    cout << "Array auf "<< anz << "Elemente erweitert." << endl;
    return true;
}

IntArr::IntArr(const int& anz_in){
    anz = anz_in < 0 ? 0 : anz_in;

    if(!(p = new int[anz])){
        anz = 0;
    }
}

int& IntArr:operator [] (const int& index){
    if(index >= 0 && index  < anz){
        return p[index];
    }

    
    cerr << "Fehlerindizierung" << index << " ( zulaessig: 0 bis " << anz-1 << ")" << endl;

    if(expandArray(index +1)){
        return p[index];
    }

    ostrstream errlog;
    errlog << "Fehlerindizierung" << index << " ( zulaessig: 0 bis " << anz-1 << ")" << endl;
    throw(errlog.str());

    /*                        // Scapegoat-Variable (Opfer) als Lösung für Buffer Overflows
    static int opfer = 0;
    return opfer;
    */

    /*
    if(p){                    //Programmabburch  als Lösung für Buffer Overflows
        delete[] p;
        p = (int*)0;
        anz = 0;
    }
    exit(1);
    */
}

IntArr::~IntArr(){
    if(p){
        delete[] p;
        p = (int *)0;
        anz = 0;
    }
}