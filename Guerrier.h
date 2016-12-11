/*
 * Guerrier.h
 *
 *  Created on: 11 déc. 2016
 *      Author: magalie
 */

#ifndef GUERRIER_H_
#define GUERRIER_H_

#include "Personnage.h"

class Guerrier: public Personnage {
public:
	Guerrier();
	void frapperCommeUnSourd(void);
	virtual ~Guerrier();
};

#endif /* GUERRIER_H_ */
