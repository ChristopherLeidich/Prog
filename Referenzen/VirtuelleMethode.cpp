#include <iostream>

using namespace std;



class AT
{
public:
    virtual void Doit() { cout << "AT::Doit" << endl; }
};

class BT : public AT
{
public: 
    virtual void Doit() override { cout << "BT::Doit" << endl; }
};

class CT : public BT
{
public:
    virtual void Doit() {cout << "CT::Doit" << endl;}
};


int main() {
    AT * ap;
    BT * bp = new BT;
    CT * cp = new CT;

    ap = bp;
    ap->Doit();

    ap = cp;
    ap->Doit();

    delete ap;
}