/*
 * Personnage.cpp
 *
 *  Created on: 11 déc. 2016
 *      Author: seb
 */

#include "Personnage.h"

#include <string.h>

using namespace std;

Personnage::Personnage():m_vie(100),m_nom("John Doe") {
}
Personnage::Personnage(string nom,int vie):m_vie(vie),m_nom(nom){
}
void Personnage::recevoirAttaque(int degat){
	m_vie -= degat;
}
void Personnage::coupDePoing(Personnage& adversaire){
	adversaire.recevoirAttaque(10);
}

Personnage::~Personnage() {
	// TODO Auto-generated destructor stub
}
