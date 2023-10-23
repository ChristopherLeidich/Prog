#include <iostream>
#include <cmath>



using namespace std;


template<class T, int i>


class A         // A ist das Klassen-Template
{
        T * ct;
    public:
        A() {                   // oder A<T, i>::A<T, i>()
        ct = new T[i];          // Array der Laenge i aus Objekten T
        }

        void hello() { cout << "hello" << endl; }       // Anwendungsbeispiel
};

class cT1 {                     // einfache Klasse
        double x;
    public:
        cT1 (double x1 = 0.0) { x = x1; }
        void print (void) {
            cout << "cT1-Objekt Variable x: " << x << endl;
        }
};


// Hauptprogramm mit Klasseninstanzen diversen Typen

int main() {
try{
    A<int, 30> integervector;   // integervector ist die Instanz
                                // von A für ein Integer-Array


    A<cT1, 10> t1vector;        // Array aus T1-Objekten
                                // Instanzen verwenden

    t1vector.hello();

    integervector.hello();
    
    } catch (...){
        cout << "An unknown Error has occured!"
    }


    /*char* s = "Ein String";*/
    int i = 1;
    float f = 3.1415;
    void* p = &i;

    cout /*<<'\n'<< "string   : " << s*/
         <<'\n'<< "integer  : " << i
         <<'\n'<< "float    : " << f
         <<'\n'<< "void     : " << p;


    return 0;
};