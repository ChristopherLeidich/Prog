#include <iostream>
#include <iomanip>
#include <random>
#include <string>


using namespace std;
class Attacke
{
    private:
        string name;
        int strenght;
        string type;
    public:
        Attacke(){name = "Struggle", strenght = 50, type = "???";}

        Attacke(string name_in, int str_in, string typ_in){name = name_in; strenght = str_in; type = typ_in;}
};

class Pokemon
{
    private:
        string name;
        int level;
        int atk;
        int spatk;
        int def;
        int spdef;
        int init;
        string attack1;
        string attack2;
        string attack3;
        string attack4;
        string ability;
    public:
        Pokemon(){name = "noname",level = 0, atk = 0, spatk = 0, def = 0, spdef = 0, init = 0,
         attack1 = "struggle", attack2 = "struggle", attack3 ="struggle", attack4 = "struggle", ability = "None";}

        Pokemon(string nam_in,int lev_in, int atk_in, int spatk_in, int def_in, int spdef_in, int init_in, string att1_in, string att2_in, string att3_in, string att4_in, string abi_in)
        {name=nam_in; level = lev_in; atk = atk_in; spatk = spatk_in; def = def_in; spdef = spdef_in; init = init_in; attack1 = att1_in; attack2 = att2_in; attack3 = att3_in ; attack4 = att4_in; ability = abi_in;}
        
        void ausgabe(){cout<<"Pokemon:"<<endl<< "Name= "<<name<<", Level = " <<level << endl <<"Atk = "<< atk <<", SpAtk = "<< spatk <<endl<<"Def = "<< def << ", SpDef = "<< spdef <<endl<<"Initiative = "<<init<<endl<< "Attacke 1 = "<<attack1<<", Attacke 2 = "<< attack2 <<endl<<"Attacke 3 = "<< attack3 <<", Attacke 4 = "<< attack4 <<endl<< "Fähigkeit = " << ability << endl ;}
    //~Pokemon();
};

int main(){

 cout << "Hello World!" << endl;

 Pokemon Shiggy("Shiggy",5,15,25,18,16,12,"Aquaknarre","Tackle","Silberblick","Heuler","Wandlungskunst");

 Shiggy.ausgabe();

    return 0;
}