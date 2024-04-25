#include <iostream>
#include <Windows.h>
using namespace std;

int defaultparm(int a, int b, int c, int d, int e, int f = 1, int g = 2) {
	return (a + b + c + d + e + f + g) / 7;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int v1 = defaultparm(1, 2, 3, 4, 5) << '\n';
	int v2 = defaultparm(1, 2, 3, 4, 5, 6, 7) << '\n';
}