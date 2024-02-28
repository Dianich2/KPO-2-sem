#include "stdafx.h"

int day_to_birthday(date& currentdate, date& birthday, int* days_month, bool &t) { // функция для подсчета количества дней до дня рождения 
  int num = 0;
  if (currentdate.month < birthday.month) {
    num += (days_month[currentdate.month - 1] - currentdate.day);
    for (int i = currentdate.month; i < birthday.month - 1; i++) {
      num += days_month[i];
    }
    num += birthday.day;
  }
  else if (currentdate.month == birthday.month && currentdate.day <= birthday.day) {
    num = birthday.day - currentdate.day;
  }
  else {
    num += days_month[currentdate.month - 1] - currentdate.day;
    for (int i = currentdate.month; i < 12; i++) {
      num += days_month[i];
    }
    for (int i = 0; i < birthday.month - 1; i++) {
      num += days_month[i];
    }
    if (birthday.month > 2 && t) {
      num--;
    }
    num += birthday.day;
    if (visokosny(currentdate.year + 1) && birthday.month > 2) {
      num++;
    }
  }
  return num;
}
