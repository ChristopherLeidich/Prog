#include <iostream>
#include <string>
#include <iomanip>
#include <random>

using namespace std;

/*class Rad{
    private:
        string name;
        string Material;
        double radgröße;
};*/

class Motorad{
    private:
        string name;
        int ps;
        double hubraum;
        double maxgeschwindigkeit;
        double laenge, breite, hoehe;
        int herstellungsjahr;
    public:
        Motorad(){name = "noname",ps = 0, hubraum = 0.0, maxgeschwindigkeit = 0.0, laenge = 0.0, breite = 0.0, hoehe = 0.0, herstellungsjahr = 0000;}

        Motorad(string nam_in,int ps_in, double hub_in, double mgesch_in, double len_in, double wdh_in, double heig_in, int pyear_in)
        {name=nam_in; ps = ps_in; hubraum = hub_in; maxgeschwindigkeit = mgesch_in; laenge = len_in; breite = wdh_in; hoehe = heig_in; herstellungsjahr = pyear_in;}
        
        void fahren() {
            if(name == "Saedr-Krupp Deepdive 4k"){
                cout<<"Die "<<name<<" Beschleunigt auf "<<maxgeschwindigkeit<< "km/h weicht dann dank Seadr-Krupp Drivelink dem Baum aus und verschwindet in der Dunkelheit..." <<endl;

            }else{
            cout<< "Das Motorad " << name << " beschleunigt auf "<< maxgeschwindigkeit << "km/h und fährt dann gegen den nächsten Baum und explodiert!"<<endl;}
        }
        
};

int main(){
    Motorad Berretta("Berretta",500 , 78.4 , 350.4, 2.3, 0.45, 0.54, 1897);
    Motorad Deepdive("Saedr-Krupp Deepdive 4k",450,94.4,370.4,2.1,0.24,0.61,2073);

    Berretta.fahren();
    Deepdive.fahren();

    return 0;
}