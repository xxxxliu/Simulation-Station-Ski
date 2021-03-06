/*
 * Arc.h
 *
 *  Created on: 14 avr. 2017
 *      Author: cchevalier
 */

#ifndef SCR_ARC_HPP_
#define SCR_ARC_HPP_

#include <string>
#include <list>
using namespace std;

class Arc {
	string nom;
	bool ouvert;
	int tempsMoyen;
	list <Arc> Suivants;

public:
	Arc();
	virtual ~Arc();
	string getNom();
	bool getOuvert();
	int getTempsMoyen();
	list <Arc> getSuivants();
	void setNom(string);
	void setOuvert(bool);
	void setTempsMoyen(int);
	void setSuivants(list<Arc>);
};

#endif /* SCR_ARC_HPP_ */
