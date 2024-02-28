#include "stdafx.h"
void name_month(date &currentdate) { // функция для определения названия месяца по номеру
	string name_m[12] = { "Январь", "Февраль", "Март", "Апрель"," Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
	cout << name_m[currentdate.month - 1];
}