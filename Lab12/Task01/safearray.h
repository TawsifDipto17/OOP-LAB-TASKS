#pragma once
#include<iostream>
#include "exception.h"
#include <process.h>
using namespace std;

const int LIMIT = 100;

template<class T>
class safearray
{
private:
	T arr[LIMIT];
public:
	T& operator [](int n)
	{
		if (n < 0 || n >= LIMIT)
		{
			Exception e(n);
			throw  e;
		} return arr[n];
	}
	
};

