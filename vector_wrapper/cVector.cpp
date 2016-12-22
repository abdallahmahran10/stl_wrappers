#include "cVector.h"

TEMPLATE
cVector<T>::cVector(void *tagObj):_mSorted(true),_mKey(_Vector::count++)
{
	_mTag = tagObj;
}


TEMPLATE
void cVector<T>::add(T elm)
{ 
	_mSorted = false;
	_mContainer.push_back(elm);
}


TEMPLATE
void cVector<T>::sortAsc()
{
	if(!_mSorted)
		std::sort(_mContainer.begin(), _mContainer.end());
}

TEMPLATE
void cVector<T>::sortDesc()
{
	if(!_mSorted)
		std::sort(_mContainer.rbegin(), _mContainer.rend());
}


TEMPLATE
std::string cVector<T>::toString(std::string (*pf)(const T&), const std::string& sep = ",") const
{
	if(len()<1)
		return "";
	std::stringstream ss;
	ss<<_mContainer[0];
	vecConstIterator it = next(_mContainer.begin()); 
	for(; it != _mContainer.end(); ++it)
		ss<< sep <<pf(*it);

	return ss.str();
}

TEMPLATE
std::string cVector<T>::toString(const std::string& sep = ",") const
{
	if(len()<1)
		return "";
	std::stringstream ss;
	ss<<_mContainer[0];

	vecConstIterator it = next(_mContainer.begin());
	for(; it != _mContainer.end(); ++it)
		ss<< sep << *it;

	return ss.str();

}