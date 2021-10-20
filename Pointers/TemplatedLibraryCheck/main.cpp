#include <iostream>
#include "FillRand.h"
#include "Print.h"
#include "Memory.h"

using namespace std;

__declspec(dllimport) void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}
