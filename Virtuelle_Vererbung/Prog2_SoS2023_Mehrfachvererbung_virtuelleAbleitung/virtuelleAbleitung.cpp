// C++-Demoprogramm fuer die virtuelle Ableitung bei Mehrfachvererbungen

#include <iostream>
using namespace std;

class AT {		// Basisklasse
	int i, j, k;
public:
	void Doit(void) { cout << "AT::Doit()" << endl; }
};


class BT : virtual public AT { // einfache Vererbung
	double x, y;
public:
	void Calculate(double arg1, int arg2) { cout << "BT::Calculate()" << endl; }
	//long Doit(const char* str);
};


class CT : virtual public AT { // einfache Vererbung
	char* z;
};


class DT : public BT, public CT {	// Mehrfachvererbung
	int u, v;
};


int main() {
	DT d;

	d.Calculate(1.2, 3);
	d.Doit();

	return 0;
}