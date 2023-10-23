#include <iostream>
#include <string>
using namespace std;

    class cBoot
    {
        private:
            string name;
            double laenge;
            double hoehe;
            double breite;
            double tiefgang;
            int herstelljahr;
        public:
            cBoot(){name= "Noname", laenge=0,hoehe=0,breite=0,tiefgang=0; herstelljahr=0;}
            cBoot(string nam_in, double l_in, double h_in, double b_in, double t_in, int he_in){name=nam_in; laenge = l_in; hoehe=h_in; breite=b_in; tiefgang=t_in;herstelljahr = he_in ;}
            void ausgabe(){cout<<"cBoot: Name= "<<name<<", Laenge = "<< laenge<<", Hoehe = "<< hoehe<<", Breite = "<< breite<< ", Tiefgang = "<<tiefgang<<", Herstellungsjahr = "<<herstelljahr<<endl ;}
    };

int main(){

    cBoot batavia(Batavia, 5.2, 9.78, 2.4, 1.67, 1988);
    cBoot neptio(Neptio, 720.56, 222.4, 78.79, 32.55, 2010);
    cBoot nautiocaribia(Nautioncaribia, 22.44, 18.4, 4.82, 2.43, 1255);
 
    cout << "Schiff Ahoi!"<<endl;

    batavia.ausgabe();
    neptio.ausgabe();
    nautiocaribia.ausgabe();


    return 0; 
}