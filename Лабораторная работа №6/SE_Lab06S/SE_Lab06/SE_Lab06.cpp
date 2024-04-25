#include "../SE_Lab06L/Dictionary.h"
#pragma comment(lib, "C:\\���\\������������ ������\\������������ ������ �� ���\\������������ ������ �6\\SE_Lab06S\\Debug\\SE_Lab06L.lib")
#include <Windows.h>
#include <iostream>
using namespace Dictionary;
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try {
#if defined(TEST_CREATE_01)
		Instance d = Create("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", 4);
#elif defined(TEST_CREATE_02)
		Instance d = Create("��������", 1000);
#else
		Instance d = Create("�������������", 9);
#endif
		Entry a1 = { 1, "������" };
		Entry a2 = { 2, "�����" };
		Entry a3 = { 3, "�������" };
		Entry a4 = { 6, "��������" };
#if defined(TEST_ADDENTRY_04)
		Entry a5 = { 1, "������" };
#else
		Entry a5 = { 4, "������" };
#endif
		Entry a6 = { 5, "��������" };
		Entry a7 = { 7, "���������" };
		Entry a8 = { 8, "����������" };
		Entry a9 = { 9, "�����" };
		Entry a10 = { 10, "������" };
		Entry a11 = { 4, "���������" };
		AddEntry(d, a1);
		AddEntry(d, a2);
		AddEntry(d, a3);
		AddEntry(d, a4);
		AddEntry(d, a5);
		AddEntry(d, a6);
		AddEntry(d, a7);
		AddEntry(d, a8);
		AddEntry(d, a9);
#if defined(TEST_ADDENTRY_03)
		AddEntry(d, a10);
#endif
#if defined(TEST_GETENTRY_05)
		GetEntry(d, 1000);
#else
		GetEntry(d, 9);
#endif
#if defined(TEST_GETENTRY_06)
		DelEntry(d, 1000);
#else
		DelEntry(d, 5);
#endif
#if defined(TEST_UPDENTRY_07)
		UpdEntry(d, 1000, a10);
#elif defined(TEST_UPDENTRY_08);
		UpdEntry(d, 7, a11);
#else
		UpdEntry(d, 7, a10);
#endif
		Instance s = Create("��������", 7);
#if defined(TEST_PRINT_09)
		Print(s);
#endif
		Entry b1 = { 1, "�������" };
		Entry b2 = { 2, "������" };
		Entry b3 = { 3, "������" };
		Entry b4 = { 4, "�������" };
		Entry b5 = { 5, "�������" };
		Entry b6 = { 6, "������" };
		Entry b7 = { 7, "�����" };
		AddEntry(s, b1);
		AddEntry(s, b2);
		AddEntry(s, b3);
		AddEntry(s, b4);
		AddEntry(s, b5);
		AddEntry(s, b6);
		AddEntry(s, b7);
		Print(d);
		Print(s);
		Delete(d);
		Delete(s);
	}
	catch (const char* e) {
		cout << e << '\n';
	}
}