// Date:     06.12.2022
// Editor:   Christopher Leidich
// Name:     Subscript1

#include <iostream>

using namespace std;

class cintArr
{
    int *p; // Pointer auf das New Array
    int anz;

    bool enhanceArray(const int& newAnz){
        int * phelp = new int[newAnz];

        if(!phelp){
            return false;
        }
        
        if(p && anz){
            for(int i = 0; i < anz; i++){
                phelp[i] =p[i];
            }

            delete [] p;
        }

        p = phelp;
        anz = newAnz;

        cerr << "cintArr -- expandArray(): erhoehe Anzahl der Elemente auf " << newAnz <<endl;

        return true;
    }

public:
    cintArr(const int &anz_in)
    {

        anz = anz_in < 0 ? 0 : anz_in; // leeres Array zulassen

        if (anz && !(p = new int[anz]))
        {
            anz = 0;
        }
    }

    int &operator[](const int &index)
    {
        if (index >= 0 && index <= anz)
        { // zulaessige Indexwerte
            return p[index];
        }

        // Fehlerbearbeitung: Opfer-Int für Fehler

        cerr << "cintArr. Fehlerindizierung " << index << "zuleassig: max. " << anz - 1 << ")" << endl;
            if(index >= 0 && enhanceArray(index + 1)){
                return p[index];
            }

        //static int opfer = NULL;
        //return opfer;

        // if (p){
        //     delete[] p;
        //     p = (int *)0;   //sauberen Zustand herstellen, auch wenn
        //     anz = 0;        // er gleich im Anschluss verworfen wird
        // }

        // exit(22);
    }

    ~cintArr()
    {

        if (p)
        {
            delete[] p;
            p = (int *)0; // sauberen Zustand herstellen, auch wenn
            anz = 0;      // er gleich im Anschluss verworfen wird
        }
    }
}

int
main()
{
    cintArr iArr(10);

    for (int i = 0, i < 10; i++)
    {
        iArr[i] = (i + 1) * (i + 1);
    }

    for (int i = 0, i < 10; i++)
    {
        cout << 'iArr[' << i << '] = ' << iArr[i] << endl;
    }

    return 0;
}