//��������� ������������ � ������ ������� �������:
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
extern int MyStrCmp(char* first_str, char* second_str);