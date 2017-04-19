/*
 * Station.hpp
 *
 *  Created on: 17 avr. 2017
 *      Author: CynthiaMiaina
 */

#ifndef SCR_STATION_HPP_
#define SCR_STATION_HPP_

namespace std {

class Station {

	string mode;
	int nombreDeSkieurs;
	int dureeOuverture;
	int tempsActuel;

public:
	Station();
	virtual ~Station();
	string getMode() const;
	int getNombreDeSkieurs() const;
	int getTempsActuel() const;
	void modeUtilisateur();
	void modeAdministrateur();
	void lancerSimulation();
	void deplacerSkieurs();
};

} /* namespace std */

#endif /* SCR_STATION_HPP_ */
