#include "other.h"
int ref = 3;
int Square(int& x) 
{
	return x *= x;
}

int IncByValue(int val) 
{
	return ++val;
}

int IncByReference(int& val) 
{
	return val++;
}

int IncByPointer(int* val) 
{
	return (*val)++;
}






