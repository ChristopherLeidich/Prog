// C++ - Demoprogramm fuer eine einfach rueckwaerts verkettete Liste (Minimalversion)

#include <iostream>
using namespace std;

#define NIL (cElement*)0

#include "cElement.h"

int main() {
	cElement* p_act = new cElement(42, 1.234, NIL);

	p_act = p_act->newElement(-7, 456.789);
	p_act = p_act->newElement(10000, -0.003);

	p_act->printList();			// ganze Liste ausgeben

	delete p_act;

	return 0;
}