/*
 * Coordinate.h
 *
 *  Created on: May 6, 2018
 *      Author: mcsa
 */

#ifndef COORDINATE_H_
#define COORDINATE_H_


struct Coordinate{
	uint x;
	uint y;

	Coordinate(uint new_x, uint new_y):x(new_x),y(new_y){}
};


#endif /* COORDINATE_H_ */
