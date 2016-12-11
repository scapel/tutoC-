//============================================================================
// Name        : tutoC++.cpp
// Author      : seb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"

using namespace std;

int main() {
	cout << "Tuto C++" << endl; // prints !!!Hello beaglebone!!!

	Personnage john("John",150);
	Guerrier rambo("Rambo",300);
	Personnage* p_personnage(0);
	Guerrier* p_guerrier(0);

	Magicien merlin("Merlin",50,800);

	p_personnage = &rambo;
	p_guerrier = &rambo;

	john.coupDePoing(rambo);
	rambo.coupDePoing(john);

	p_personnage->coupDePoing(john);
	p_guerrier->frapperCommeUnSourd();

	p_guerrier->sePresenter();

	return 0;
}
