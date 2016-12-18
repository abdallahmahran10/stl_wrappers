// wrappers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


std::string f(const double &d)
{
	std::stringstream strs;
	strs << d;
	std::string str = strs.str();
	return str;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cVector<int> v1;
	v1.add(2);
	cVector<int>::vecIterator it = v1.begin();
	cVector<double> v2;
	cThread c;
	//std::cout<< v1.getKey() << std::endl;
	//v2.add(123.5);
	//v2.add(123.7);
	std::cout<< v1.toString() << std::endl;	
	std::cout<< *it << std::endl;
	system("pause");
	return 0;
}

