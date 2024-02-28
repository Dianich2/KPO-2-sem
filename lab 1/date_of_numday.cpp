#include "stdafx.h"

void date_of_numday(int n, int* days_month, int year) { // функция вычисления даты по номеру дня в году
	int month = 1;
	int i = 0;
	while (n > days_month[i]) {
		n -= days_month[i];
		month++;
		i++;
	}
	if (n < 10) {
		cout << 0 << n << '.';
	}
	else {
		cout << n << '.';
	}
	if (month < 10) {
		cout << 0 << month << '.';
	}
	else {
		cout << month << '.';
	}
	cout << year;
}