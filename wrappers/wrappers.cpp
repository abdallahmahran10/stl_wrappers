// wrappers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cVector.h"
#include "cThread.h"


int _tmain(int argc, _TCHAR* argv[])
{
	cVector<int> v1;
	cVector<double> v2;
	cThread c;
	std::cout<< v1.getKey() << std::endl;	
	std::cout<< v2.getKey() << std::endl;	
	system("pause");
	return 0;
}

