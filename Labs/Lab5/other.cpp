#include "other.h"
#include <iostream>

double a = 4;
double& ref = a;
int Square(const int& x) 
{
	return x * x;
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

	return min;
}

//Подсчитывает количество символов в строке
int strLength(const char* str) {

	int counter = 0;

	//Работает до тех пор, пока текущий элемент строчки не будет равен терминированному нулю
	while (str[counter] != '\0') {
		counter++;
	}

	return counter;
}

int MyStrCmp(const char* f_str, const char* s_str, int f_size, int s_size)
{
	int sz = 0;

	if (f_size > s_size) {
		sz = f_size;
	}
	else {
		sz = s_size;
	}

	for (int i = 0; i < sz; i++)
	{
		if (f_str[i] > s_str[i]) {
			return 1;
		}
		else if (f_str[i] < s_str[i]) {
			return -1;
		}		
	}	
	return 0;	
}

int* myMin(int* arr, int size) {

	int* min = &arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < *min) {
			min = &arr[i];
		}
	}

	return min;
}

const char* NameOfMonth(int month) {
	switch (month) {
	case 1:
		return "January";
	case 2:
		return "February";
	case 3:
		return "March";
	case 4:
		return "April";
	case 5:
		return "May";
	case 6:
		return "June";
	case 7:
		return "July";
	case 8:
		return "August";
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	default:
		return "Err";
	}
}






