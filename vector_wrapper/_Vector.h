#pragma once

template<typename T> class cVector;


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

