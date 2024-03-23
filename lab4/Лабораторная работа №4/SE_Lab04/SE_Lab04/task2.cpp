#include <iostream>
#include <Windows.h>
using namespace std;

typedef unsigned int hour;
typedef unsigned short minute;
typedef unsigned short sec;

struct Time {
	hour hh;
	minute mm;
	sec ss;
};

bool check(Time &currenttime) { //функция проверки корректности
	if (currenttime.hh % 100 < 0 || currenttime.hh % 100 > 59 or currenttime.hh / 100 % 100 < 0 or currenttime.hh / 100 % 100 > 59 or currenttime.hh / 10000 < 0 or currenttime.hh / 10000 > 23) {
		return 0;
	}
	currenttime.ss = currenttime.hh % 100;
	currenttime.mm = currenttime.hh / 100 % 100;
	currenttime.hh /= 10000;
	return 1;
}

void settime(Time& currenttime) { // функция установки времени
	cout << "Введите время в формате HHMMSS\n";
	cin >> currenttime.hh;
	while (!check(currenttime)) {
		cout << "Некорректный ввод\n";
		cout << "Попробуйте снова\n";
		cin >> currenttime.hh;
	}
}

void saytime(Time& t) { // функция красивого вывода времени
	if (t.hh < 10) {
		cout << 0 << t.hh << ':';
	}
	else {
		cout << t.hh << ':';
	}
	if (t.mm < 10) {
		cout << 0 << t.mm << ':';
	}
	else {
		cout << t.mm << ':';
	}
	if (t.ss < 10) {
		cout << 0 << t.ss << '\n';
	}
	else {
		cout << t.ss << '\n';
	}
}


Time operator + (Time t1, Time t2) { // перегрузка оператора +
	Time temp;
	t1.ss += t2.ss;
	temp.ss = t1.ss % 60;
	t1.mm += (t1.ss / 60);
	t1.mm += t2.mm;
	temp.mm = t1.mm % 60;
	t1.hh += (t1.mm / 60);
	t1.hh += t2.hh;
	temp.hh = t1.hh % 24;
	return temp;
}

Time operator - (Time t1, Time t2) { // перегрузка оператора -
	Time temp;
	if (t1.ss < t2.ss) {
		temp.ss = t1.ss + 60 - t2.ss;
		t1.mm--;
	}
	else {
		temp.ss = t1.ss - t2.ss;
	}
	if (t1.mm < t2.mm) {
		temp.mm = t1.mm + 60 - t2.mm;
		t1.hh--;
	}
	else {
		temp.mm = t1.mm - t2.mm;
	}
	if (t1.hh < t2.hh) {
		temp.hh = t1.hh + 24 - t2.hh;
	}
	else {
		temp.hh = t1.hh - t2.hh;
	}
	return temp;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Time currenttime1;
	settime(currenttime1);
	Time currenttime2;
	settime(currenttime2);
	Time currenttime3 = currenttime1 + currenttime2;
	saytime(currenttime1);
	saytime(currenttime2);
	saytime(currenttime3);
	Time currenttime4 = currenttime1 - currenttime2;
	saytime(currenttime1);
	saytime(currenttime2);
	saytime(currenttime4);
}