/*
 * RemonteMecanique.hpp
 *
 *  Created on: 14 avr. 2017
 *      Author: xliu04
 */

#ifndef REMONTEMECANIQUE_HPP_
#define REMONTEMECANIQUE_HPP_
#include "Arc.hpp"

class RemonteMecanique : public Arc{
public:
	int niveauMinPistes;
	int frequence;
	int nbPersonneEnAttente;
public:
	RemonteMecanique();
	virtual ~RemonteMecanique();
};

#endif /* REMONTEMECANIQUE_HPP_ */
