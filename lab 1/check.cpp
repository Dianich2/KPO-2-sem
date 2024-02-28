#include "stdafx.h"
using namespace std;
bool check(string a, int *days_month, bool &t) { // функция проверки корректности ввода
  if (a.length() != 8) {
    return 0;
  }
  for (unsigned int i = 0; i < a.length(); i++) {
    if (a[i] < '0' || a[i] > '9') {
      return 0;
    }
  }
  int d = stoi(a);
  int year = d % 10000; d /= 10000;
  int month = d % 100; d /= 100;
  t = visokosny(year);
  if (t) {
    days_month[1] += 1;
  }
  if (d > 0 && month > 0 && year > 0 && month <= 12) {
      if (d <= days_month[month - 1]) {
        return 1;
      }
      return 0;
  }
  return 0;
}
