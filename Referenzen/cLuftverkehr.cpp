// Prog.-Name:  cLuftverkehr.cpp
// Editor:      Christopher Leidich
// Date:        20.12.2022

#include <iostream>

using namespace std;

class cFlugzeug(                                        //abstrakte Klasse 
public:
    virtual double startvorgang(const double&) = 0;     //abstrakte Methode
);

class cFrachtFZ:
public: cFlugzeug
(
public:
    virtual double startvorgang(const double&) = 0;
);

class cPassagierFZ:
public: cFlugzeug
(
public:
    virtual double startvorgang(const double&) = 0;
);

class cBoeing747F:
    public cFrachtFZ
    {
        public:
            virtual double startvorgang(const double& maxzeit) = override{
                cout << "Die Boing747F pumpt Luft aus dem Frachtraum raus und Stickstoff hinerin" << maxzeit*0.3 << "Sekunden lang 
                und statet nach weiteren " << maxzeit*06 << "Sekunden am Ende der Startbahn." << endl << endl;

                return 0.99*maxzeit;
            };
    }

class cCessna208
    public: cPassagierFZ
    {
        virtual double startvorgang(const double& maxzeit) = override{
            cout<< "Die Cessna 208 laesst ihre Rotoren für " << maxzeit*0.6 << " Sekunden Warmlaufen und heb nach weiteren " << maxzeit*0.4 <<"Sekunden ab" <<endl<<endl;
            return 0.24*maxzeit;
    }
    }


int main(){
    cFlugzeug * cf;                     //Zeiger auf Abstrakte Basisklasse
    cFlugzeug * startbahn[] = {new cBoeing747F, new cCessna208}; //Zeiger-Array auf die abstrakte Basisklasse
    cBoeing747F Jumbo1;
    cCessna208 Phoenic;

    double sumStartZeit = 0;

    cf = &Jumbo1;

    cf -> startvorgang(55.7);

    Jumbo1.startvorgang(45.5);

    cf = &Phoenic;

    cf -> startvorgang(21.7);

    Phoenic.startvorgang(22.0);

    for (cFlugzeug* cs : startbahn){                 // zusätzliche for-Schleife "foreach"-Version
        sumStartZeit += cs -> startvorgang(120);
    }

    cout <<"Gesammtzeit der Startvorgaenge: " << sumStartZeit << "Sekunden" <<endl;


    return EXIT_SUCCESS;
}