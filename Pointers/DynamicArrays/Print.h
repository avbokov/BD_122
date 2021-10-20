#pragma once
#include<iostream>
using namespace std;

template<typename T>__declspec(dllimport) void Print(T arr[], const int n);
template<typename T>__declspec(dllimport) void Print(T** arr, const int rows, const int cols);
//#include"Print.cpp"