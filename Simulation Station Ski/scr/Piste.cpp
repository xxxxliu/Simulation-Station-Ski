/*
 * Piste.cpp
 *
 *  Created on: 14 avr. 2017
 *      Author: cchevalier
 */

#include "Piste.hpp"

Piste::Piste(int niv) {
	niveau=niv;
	// TODO Auto-generated constructor stub
}

Piste::~Piste() {
	// TODO Auto-generated destructor stub
}

int Piste::getNiveau(){
	return niveau;
}

void Piste::setNiveau(int niv){
	niveau=niv;
}
