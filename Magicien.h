/*
 * Magicien.h
 *
 *  Created on: 11 déc. 2016
 *      Author: magalie
 */

#ifndef MAGICIEN_H_
#define MAGICIEN_H_

#include <string>
#include "Personnage.h"

class Magicien: public Personnage{
public:
	Magicien(std::string nom,int vie,int mana);

	void bouleDeFeu(void);
	void bouleDeGlace(void);
private:
	int m_mana;
};

#endif /* MAGICIEN_H_ */
