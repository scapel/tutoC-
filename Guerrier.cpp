/*
 * Guerrier.cpp
 *
 *  Created on: 11 déc. 2016
 *      Author: magalie
 */
#include <string>
#include <iostream>
#include "Guerrier.h"

using namespace std;

Guerrier::Guerrier(string nom,int vie):Personnage(nom,vie) {
	// TODO Auto-generated constructor stub
}

void Guerrier::frapperCommeUnSourd(void){

}

void Guerrier::sePresenter(void){
	Personnage::sePresenter();
	cout << " Je suis un Guerrier !!!" << endl;
}
//Guerrier::~Guerrier() {
//	// TODO Auto-generated destructor stub
//}
