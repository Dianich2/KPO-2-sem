#include <iostream>
#include <Windows.h>
using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date {
	day dd;
	month mm;
	year yyyy;
};

bool operator > (Date& date1, Date& date2) { // перегрузка оператора >
	return((date1.yyyy > date2.yyyy) || (date1.mm > date2.mm && date1.yyyy == date2.yyyy) || (date1.dd > date1.dd && date1.mm == date2.mm && date1.yyyy == date2.yyyy));
}

bool operator < (Date& date1, Date& date2) { //перегрузка оператора <
	return((date1.yyyy < date2.yyyy) || (date1.mm < date2.mm && date1.yyyy == date2.yyyy) || (date1.dd < date1.dd && date1.mm == date2.mm && date1.yyyy == date2.yyyy));
}

bool operator == (Date& date1, Date& date2) { // перегрузка оператора ==
	return(date1.dd == date2.dd && date1.mm == date2.mm && date1.yyyy == date2.yyyy);
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Date date1 = {7, 1, 1980};
	Date date2 = {7, 2, 1993};
	Date date3 = {7, 1, 1980};
	if (date1 < date2) {
		cout << "истина" << '\n';
	}
	else {
		cout << "ложь" << '\n';
	}
	if (date1 > date2) {
		cout << "истина" << '\n';
	}
	else {
		cout << "ложь" << '\n';
	}
	if (date1 == date2) {
		cout << "истина" << '\n';
	}
	else {
		cout << "ложь" << '\n';
	}
	if (date1 == date3) {
		cout << "истина" << '\n';
	}
	else {
		cout << "ложь" << '\n';
	}
}