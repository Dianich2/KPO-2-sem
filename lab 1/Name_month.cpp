#include "stdafx.h"
void name_month(date &currentdate) { // ������� ��� ����������� �������� ������ �� ������
	string name_m[12] = { "������", "�������", "����", "������"," ���", "����", "����", "������", "��������", "�������", "������", "�������"};
	cout << name_m[currentdate.month - 1];
}