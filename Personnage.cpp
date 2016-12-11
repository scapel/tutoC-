/*
 * Personnage.cpp
 *
 *  Created on: 11 déc. 2016
 *      Author: seb
 */
#include <iostream>
#include <string.h>
#include "Personnage.h"

using namespace std;

Personnage::Personnage():m_vie(100),m_nom("John Doe") {
}
Personnage::Personnage(string nom,int vie):m_vie(vie),m_nom(nom){
}
void Personnage::recevoirAttaque(int degat){
	m_vie -= degat;
}
void Personnage::coupDePoing(Personnage& adversaire)const{
	adversaire.recevoirAttaque(10);
}
void Personnage::sePresenter(void)const{
	cout << "Je m'appelle " << m_nom << " il me reste " << m_vie << " points de vie" << endl;
}

Personnage::~Personnage() {
	// TODO Auto-generated destructor stub
}
