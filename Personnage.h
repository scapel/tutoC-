/*
 * Personnage.h
 *
 *  Created on: 11 déc. 2016
 *      Author: magalie
 */

#ifndef PERSONNAGE_H_
#define PERSONNAGE_H_

#include <string>

class Personnage {
private:
	int m_vie;
	std::string m_nom;
public:
	Personnage();
	Personnage(std::string nom,int vie);

	void recevoirAttaque(int degat);
	void coupDePoing(Personnage& adversaire)const;
	void sePresenter(void)const;
	virtual ~Personnage();
};

#endif /* PERSONNAGE_H_ */
