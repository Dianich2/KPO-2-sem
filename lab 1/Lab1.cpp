#include "stdafx.h"
using namespace std;

int days_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // массив количества дней в месяцах
int _tmain(int argc, _TCHAR* argv[])
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  string a;
  cout << "Введите дату в формате ДДММГГГГ\n";
  cin >> a;
  bool t = false;
  bool f = false;
  while (!check(a, days_month, t)) {
    cout << "Некорректный ввод\n";
    cout << "Попробуйте снова\n";
    cin >> a;
  }
  date currentdate;
  int d = stoi(a);
  currentdate.year = d % 10000; d /= 10000;
  currentdate.month = d % 100; d /= 100;
  currentdate.day = d;
  if (t){
    cout << "Год високосный\n";
  }
  else {
    cout << "Год не високосный\n";
  }
  cout << "Порядковый номер дня = " << num_day(currentdate, days_month, t) << '\n';
  cout << "Название месяца: ";
  name_month(currentdate);
  cout << "\nВведите дату своего рождения в формате ДДММГГГГ\n";
  cin >> a;
  while (!check(a, days_month, f)) {
    cout << "Некорректный ввод\n";
    cout << "Попробуйте снова\n";
    cin >> a;
  }
  date birthday;
  d = stoi(a);
  birthday.year = d % 10000; d /= 10000;
  birthday.month = d % 100; d /= 100;
  birthday.day = d;
  if (!t && f) {
    days_month[1] -= 1;
  }
  cout << "Количество дней до дня рождения = " << day_to_birthday(currentdate, birthday, days_month, t) << '\n';
  cout << "Введите порядковый номер дня в году\n";
  int currentday;
  cin >> currentday;
  while ((t && currentday > 366) || (!t && currentday > 365) || currentday <= 0) {
    cout << "Некорректные данные\n";
    cout << "Попробуйте снова\n";
    cin >> currentday;
  }
  date_of_numday(currentday, days_month, currentdate.year);
}
