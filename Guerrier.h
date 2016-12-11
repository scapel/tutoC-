/*
 * Guerrier.h
 *
 *  Created on: 11 déc. 2016
 *      Author: magalie
 */

#ifndef GUERRIER_H_
#define GUERRIER_H_

#include <string>
#include "Personnage.h"

class Guerrier: public Personnage{

public:
	Guerrier(std::string nom,int vie);
	void frapperCommeUnSourd(void);
	void sePresenter(void);
//	virtual ~Guerrier();
};

#endif /* GUERRIER_H_ */
