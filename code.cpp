// code.cpp
// ������ ������� ���������
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 17

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = x * x + 1;
	// ����� 1: ������������ � ��������� ����
	if (x < 4)
		B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
	if (4 <= x && x < 7)
		B = atan((abs(x) + 1) / 2) + 8,3 * x;
	if (7 <= x)
		B = log(abs(2 * x + exp(4 * x + 1)));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 4)
		B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
	else
		if (7 <= x )
			B = log(abs(2 * x + exp(4 * x + 1)));
		else
			B = atan((abs(x) + 1) / 2) + 8, 3 * x;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}