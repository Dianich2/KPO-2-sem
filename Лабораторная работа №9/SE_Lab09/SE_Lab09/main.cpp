#include <iostream>
#include <Windows.h>
#include "varparm.h" 
using namespace Varparm;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int v1 = ivarparm(1, 1);
	int v2 = ivarparm(2, 1, 2);
	int v3 = ivarparm(3, 1, 2, 3);
	int v4 = ivarparm(7, 1, 2, 3, 4, 5, 6, 7);

	short v5 = svarparm(1, 1);
	short v6 = svarparm(2, 1, 10);
	short v7 = svarparm(3, 10, 100, 200);
	short v8 = svarparm(7, 1, 2, 4, 6, 8, 10, 12);

	double v9 = fvarparm(1.5, FLT_MAX);
	double v10 = fvarparm(1.5, 2.4, FLT_MAX);
	double v11 = fvarparm(1.5, 2.4, 3.6, FLT_MAX);
	double v12 = fvarparm(1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.8, FLT_MAX);

	double v13 = dvarparm(1.2, DBL_MAX);
	double v14 = dvarparm(1.2, 2.8, DBL_MAX);
	double v15 = dvarparm(1.2, 2.8, 4.3, DBL_MAX);
	double v16 = dvarparm(1.2, 2.2, 3.2, 4.2, 5.2, 6.2, 7.2, DBL_MAX);
	cout << v1 << '\n';
	cout << v2 << '\n';
	cout << v3 << '\n';
	cout << v4 << '\n';
	cout << v5 << '\n';
	cout << v6 << '\n';
	cout << v7 << '\n';
	cout << v8 << '\n';
  cout << v9 << '\n';
  cout << v10 << '\n';
  cout << v11 << '\n';
  cout << v12 << '\n';
	cout << v13 << '\n';
	cout << v14 << '\n';
	cout << v15 << '\n';
	cout << v16 << '\n';
}