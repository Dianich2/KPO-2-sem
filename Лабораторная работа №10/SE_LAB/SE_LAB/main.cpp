#include <iostream>
#include <algorithm>
#include <vector>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1);
	cout << "�����: " << target1 << " ����������: " << num_items1 << '\n';
	int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << "���������� ���������, ������� 3: " << num_items3 << '\n';
	cout << '\n' << "������, ������ ����������" << '\n';
	for (auto i : v) {
		[i]() {if (i % 3 == 0) cout << i << ' '; }();
	}
	cout << '\n' <<  "������ � �����������" << '\n';
	for (auto i : v) {
		[](auto i) {if (i % 3 == 0) cout << i << ' '; }(i);
	}
	cout << '\n' << "������ ��� ����������" << '\n';
	for (auto i : v) {
		[i] {if (i % 3 == 0) cout << i << ' '; }();
	}
}