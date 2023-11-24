#include "other.h"
#include <iostream>

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

void Swap_p(int* nX, int* nY) 
{
	int temp = *nX;
	*nX = *nY;
	*nY = temp;
}

void Swap_r(int& nX, int& nY)
{
	int temp = nX;
	nX = nY;
	nY = temp;
}

const int N = 5;

void PrintArray(int* ar, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << ar[i];
	}
}

int Min(int* ar, int size) 
{
	int min = ar[0];

	for (int i = 1; i < size; i++)
	{
		if (ar[i] < min)
		{
			min = ar[i];
		}
	}

	std::cout << min;
}






