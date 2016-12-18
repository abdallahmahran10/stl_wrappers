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
#include <iostream>
#include "_Vector.h"

/**************** DEFINES ****************/
#define stl_vector std::vector
#define TEMPLATE template<typename T>

/****************** STATIC VARIABLES ******************/


/********************** cVector Class ********************/
TEMPLATE
class cVector//:private _Vector
{
	
public:
   typedef typename std::vector<T>::iterator vecIterator;
   typedef typename std::vector<T>::const_iterator vecConstIterator;

private:
	stl_vector<T> _mContainer;
	bool _mSorted;
	void *_mTag;
	long _mKey;

public:
	cVector():_mSorted(true),_mKey(_Vector::count++){}
	cVector(void *tagObj);
	cVector(const stl_vector<T>& vec):_mContainer(vec){}
	virtual ~cVector(){}
	// getters
	inline stl_vector<T> getInternalVector() const { return _mContainer; } 
	inline void *getTag() const { return _mTag; } 
	inline long getKey() const { return _mKey;} 
	inline size_t len() const { return _mContainer.size();} 
	//
	void add(T elm);
	void sortAsc();
	void sortDes();
	std::string toString(std::string (*pf)(const T&), const std::string& sep = ",") const;
	// for basic types vector
	std::string toString(const std::string& sep = ",") const;
	// iters 
   vecIterator begin() { return _mContainer.begin(); }
   vecConstIterator begin() const { return _mContainer.begin(); }
   vecIterator end() { return _mContainer.end(); }
   vecConstIterator end() const { return _mContainer.end(); }
};


////////////////////////////////

// Make implementation accessible for compilers when 
// the lib used in another project
#include "cVector.cpp"

#endif // VECTOR_H