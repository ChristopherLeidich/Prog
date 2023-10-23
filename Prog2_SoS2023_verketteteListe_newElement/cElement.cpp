#include "cElement.h"

cElement::cElement(int a_in, double x_in, cElement* prev_in) : a(a_in), x(x_in), prev(prev_in) {
	cout << "Konstruktion Element mit a = " << a << " und x = " << x << endl;
}

cElement* cElement::newElement(int a_in, double x_in) {
	cElement* p_help;

	// Die Erzeugungswerte ggf. nochmalmanipulieren (Verantwortungsprinzip)

	p_help = new cElement(a_in, x_in, this);

	// Das Objekt ggf. noch manipulieren

	return p_help;
}

void cElement::printList() {
	if (prev != NIL) {
		prev->printList();
	}
	cout << "Ausgabe Element mit a = " << a << " und x = " << x << endl;

}

cElement::~cElement() {					// rekursiver Destruktor, loescht die ganze verkettete Liste
//		cout << "Destruktion Element mit a = " << a << " und x = " << x << endl;

	if (prev != NIL) {
		delete prev;
	}
	cout << "Destruktion Element mit a = " << a << " und x = " << x << endl;
}
