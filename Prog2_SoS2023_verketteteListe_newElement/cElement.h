#pragma once
#include <iostream>
using namespace std;

#define NIL (cElement*)0

class cElement {
	int a;			// "Nutzlast" (PayLoad)
	double x;		// dto.
	cElement* prev;
public:
	cElement(int, double, cElement*);
	cElement* newElement(int, double);
	void printList();
	~cElement();
};