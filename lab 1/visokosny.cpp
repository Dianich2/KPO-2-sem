#include "stdafx.h"

bool visokosny(int year) { // �������� �� ������������
  if (year % 4 != 0) {
    return 0;
  }
  if (year % 100 != 0) {
    return 1;
  }
  if (year % 400 == 0) {
    return 1;
  }
  return 0;
}