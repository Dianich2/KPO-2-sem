#include <iostream>
#include <algorithm>
#include <vector>
#include <Windows.h>
#include <string>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout << "¬ведите число \n";
	cin >> n;
	bool t = [n]() {return n > 0; }();
	if (t) {
		cout << "„исло положительное\n";
	}
	else {
		cout << "„исло не положительное\n";
	}
	string a, b;
	cout << "¬ведите первую строку\n";
	getline(cin, a);
	getline(cin, a);
	cout << "¬ведите вторую строку\n";
	getline(cin, b);
	cout << [](auto a, auto b)->string {return a + b; }(a, b) << '\n';
	string c = [](auto a, auto b)->string {if (a.size() > b.size()) return a; if (b.size() > a.size()) return b; else return "ќдинаковы"; }(a, b);
	if (c != a && c != b) {
		cout << c << '\n';
	}
	else {
		cout << "ƒлиннее строка " << c << '\n';
	}
}