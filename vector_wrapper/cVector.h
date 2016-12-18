/*
 * Author: Abdallah Mahran
 * file: cVector.h
 * Description: Wrap c+++ vector class
*/

#ifndef VECTOR_H
#define VECTOR_H

/************** INCLUDES *****************/
#include <vector>
#include <string>

/**************** DEFINES ****************/
#define stl_vector std::vector
#define TEMPLATE template<typename T>
#define ITER stl_vector<T>::iterator 

/****************** STATIC VARIABLES ******************/


/******************** Vector Class ********************/

/* Created only to have some static variables 
 * along all types of cVector
*/

class Vector
{
protected: 
	Vector(){}
	~Vector(){}
	//
	static long a;
};

/********************** cVector Class ********************/
TEMPLATE
class cVector:private Vector
{
private:
	stl_vector<T> _mVector;
	bool _mSorted;
	void *_mTag;
	long _mKey;

public:
	cVector():_mSorted(true),_mKey(a++){}
	cVector(void *tagObj);
	cVector(const stl_vector<T>& vec):_mVector(vec){}
	virtual ~cVector(){}
	// getters
	inline stl_vector<T> getInternalVector() const { return _mVector; } 
	inline void *getTag() const { return _mTag; } 
	inline long getKey() const { return _mKey;} 
	inline size_t len() const { return _mVector.size();} 
	//
	void add(T elm);
	void sortAsc();
	void sortDes();
	std::string toString(std::string (*pf)(T&), const std::string& sep = ",") const;
};

////////////////////////////////
////////////////////////////////

// Make implementation accessible for compilers when 
// the lib used in another project
#include "cVector.cpp"

#endif // VECTOR_H