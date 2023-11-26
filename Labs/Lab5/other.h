//Прототипы используемых в данном задании функций:
#pragma once
extern int ref;
extern int Square(int& x);
extern int IncByValue(int val);
extern int IncByReference(int& val);
extern int IncByPointer(int* val);
extern void Swap_p(int* nX, int* nY);
extern void Swap_r(int& nX, int& nY);
extern const int N;
extern void PrintArray(int* ar, int size);
extern int Min(int* ar, int size);
extern int MyStrCmp(const char* f_str, const char* s_str, int f_size, int s_size);
extern int strLength(const char* str);
extern int* myMin(int* arr, int size);
extern const char* NameOfMonth(int month);