#include "../SE_Lab06L/Dictionary.h"
#pragma comment(lib, "C:\\ФИТ\\Лабораторные работы\\Лабораторные работы по КПО\\Лабораторная работа №6\\SE_Lab06S\\Debug\\SE_Lab06L.lib")
#include <Windows.h>
#include <iostream>
using namespace Dictionary;
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try {
#if defined(TEST_CREATE_01)
		Instance d = Create("Ппппппппппппппппппппппппппппппппрррррррррррррррррррррррррррррррррррррррррррррррррррррррррррееееееееееееееееееееееееееееееееееееееееееееееееееееееееееппппппппппппппппппппппппппппппппппппппооооооооооооооодаватели", 4);
#elif defined(TEST_CREATE_02)
		Instance d = Create("Студенты", 1000);
#else
		Instance d = Create("Преподаватели", 9);
#endif
		Entry a1 = { 1, "Смелов" };
		Entry a2 = { 2, "Шиман" };
		Entry a3 = { 3, "Белодед" };
		Entry a4 = { 6, "Наркевич" };
#if defined(TEST_ADDENTRY_04)
		Entry a5 = { 1, "Гринюк" };
#else
		Entry a5 = { 4, "Гринюк" };
#endif
		Entry a6 = { 5, "Якубенко" };
		Entry a7 = { 7, "Андронова" };
		Entry a8 = { 8, "Чайковский" };
		Entry a9 = { 9, "Север" };
		Entry a10 = { 10, "Янович" };
		Entry a11 = { 4, "Станкевич" };
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
		Instance s = Create("Студенты", 7);
#if defined(TEST_PRINT_09)
		Print(s);
#endif
		Entry b1 = { 1, "Сидоров" };
		Entry b2 = { 2, "Петров" };
		Entry b3 = { 3, "Иванов" };
		Entry b4 = { 4, "Лопухов" };
		Entry b5 = { 5, "Андреев" };
		Entry b6 = { 6, "Пашков" };
		Entry b7 = { 7, "Ильин" };
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