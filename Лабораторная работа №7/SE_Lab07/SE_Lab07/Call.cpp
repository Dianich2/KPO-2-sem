#include "Call.h"
using namespace std;
using namespace Call;

int _cdecl Call::cdec(int a, int b, int c) {
	return a + b + c;
}

int _stdcall Call::cst(int &a, int b, int c) {
	return a * b * c;
}

int _fastcall Call::cfs(int a, int b, int c, int d) {
	return a + b + c + d;
}