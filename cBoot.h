#pragma once

#include "cGeoPos.h"

#include <string>
using namespace std;

class cBoot {
private:
	string name;
	double laenge;
	double tiefgang;
	cGeoPos gpos;		// geografische Position des Bootes
public:
	cBoot(string = "--", double = 4.85, double = 0.42, cGeoPos = cGeoPos(7.36, 53.10));	// universeller Konstruktor
	void ausgabe();
	void fahreAbsolut(cGeoPos);
	void fahreRelativ(double, double);
	~cBoot();																			// Destruktor
};

