/*
 * Magicien.cpp
 *
 *  Created on: 11 déc. 2016
 *      Author: magalie
 */
#include <string>
#include "Personnage.h"
#include "Magicien.h"

using namespace std;

Magicien::Magicien(string nom, int vie, int mana) :
	Personnage(nom, vie), m_mana(mana) {
}
void Magicien::bouleDeFeu(void) {

}
void Magicien::bouleDeGlace(void) {

}


