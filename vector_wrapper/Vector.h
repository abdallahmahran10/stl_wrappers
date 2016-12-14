#pragma once
/*
 * Author: Abdallah Mahran
 * file: Thread.h
 * Description: Wrap c+++ thread class
*/


#ifndef VECTOR_H
#define VECTOR_H

// Includes
#include <vector>
#define _vector std::vector

// Class declaration
template<typename t>
class Vector
{
private:
	_vector<t> _mVector;

public:
	Vector(void);
	virtual ~Vector(void);
};

#endif // VECTOR_H