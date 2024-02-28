#include "stdafx.h"

int num_day(date& currentdate, int* days_month, bool &t) { // функция вычисления порядкого номера дня в году
  int num = 0;
  for (int i = 0; i < currentdate.month - 1; i++) {
    num += days_month[i];
  }
  num += currentdate.day;
  return num;
}