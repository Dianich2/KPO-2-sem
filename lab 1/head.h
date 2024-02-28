#pragma once
using namespace std;
struct date { // структура даты
  int day;
  int month;
  int year;
};

bool visokosny(int);
bool check(string, int*, bool&);
int num_day(date&, int*, bool&);
int day_to_birthday(date&, date&, int*, bool&);
void name_month(date&);
void date_of_numday(int, int*, int);