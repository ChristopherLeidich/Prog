#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class GeoPos{
    private:
        double longitude;
        double latitude;
    public:
        GeoPos(double = -137.94030, double = -42.79178;)
        GeoPos(double long_in, double lat_in){longitude = long_in; latitude = lat_in;}
        void ausgabe(){ cout<< "Derzeitige Position: "<<endl<< "Longitude: "<<longitude<<" Latitude: "<< latitude<< endl;};
}

class Boot{
    private:
        string name;
        double laenge;
        double breite;
        GeoPos gpos;
    public:
        Boot(string = "None",double = 0.0,double = 0.0;)
        Boot(string nam_in, double, len_in, double width_in, GeoPos gpos_in): gpos(gpos_in){name = nam_in; laenge = len_in; breite = width_in;}
        void ausgabe(){ cout << "Name: "<< name <<endl<< "Länge: "<<laenge <<endl<<"Breite: "<<breite<< endl; GeoPos.ausgabe()cout<< endl;};
}