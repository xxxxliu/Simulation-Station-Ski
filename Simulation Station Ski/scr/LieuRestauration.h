/*
 * LieuRestauration.h
 *
 *  Created on: 14 avr. 2017
 *      Author: cchevalier
 */

#ifndef SCR_LIEURESTAURATION_H_
#define SCR_LIEURESTAURATION_H_

class LieuRestauration {
	int capaciteResto;
public:
	LieuRestauration();
	virtual ~LieuRestauration();
	int getCapaciteResto();
	void setCapaciteResto(int);
};

#endif /* SCR_LIEURESTAURATION_H_ */
