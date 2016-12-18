/*
 * Author: Abdallah Mahran
 * file: cVector.h
 * Description: Wrap c+++ vector class
*/

#ifndef _VECTOR_H
#define _VECTOR_H

template<typename T> class cVector;



/******************** _Vector Class ********************/
/* Created only to have some static variables 
 * along all types of cVector
*/

class _Vector
{
	template<typename> friend class cVector;

private:
	_Vector(void);
	virtual ~_Vector(void);
	//
	static long count;
};

#endif