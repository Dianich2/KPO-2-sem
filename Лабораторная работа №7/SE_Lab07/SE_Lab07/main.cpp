#include <iostream>
#include "Call.h"
using namespace std;
using namespace Call;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int& ca = a;
	int t = cdec(a, b, c);
	int j = cst(ca, a, d);
	int m = cfs(a, b, c, d);
}