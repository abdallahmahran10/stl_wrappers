#include "cVector.h"
long Vector::a=0;

TEMPLATE
cVector<T>::cVector(void *tagObj):_mSorted(true),_mKey(a++)
{
	_mTag = tagObj;
}


TEMPLATE
void cVector<T>::add(T elm)
{
	_mSorted = false;
	_mVector.push_back(elm);
}


TEMPLATE
void cVector<T>::sortAsc()
{
	if(!_mSorted)
		std::sort(_mcVector.begin(), _mcVector.end());
}

TEMPLATE
void cVector<T>::sortDes()
{
	if(!_mSorted)
		std::sort(_mcVector.rbegin(), _mcVector.rend());
}


TEMPLATE
std::string cVector<T>::toString(std::string (*pf)(T&), const std::string& sep = ",") const
{
	if(len()<1)
		return "";

	std::stringstream ss = pf(_mVector[0]);
	for(ITER it= next( _mVector.begin()); it != _mVector.end(); ++it)
		ss<< sep <<pf(*it);

	return ss.str();

}