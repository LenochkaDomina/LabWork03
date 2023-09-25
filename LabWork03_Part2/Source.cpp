/*
*
*Date: 25/09/2023
*Author: Kirill Korobchinsky
*/
#pragma region Includes
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukrainian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");  setlocale(LC_ALL, "Ukrainian");
	char _char[] = "char\n";
#pragma endregion
	int _int = 20;
	int negative_int = -10;
	double _double = 123.5467;
	float zero_float = 0.0f;

	//======== �������� � ������������� ========\\

	cout << "�������� � ������������\n";
	//������������� ������ ���� ������
	cout.width(20);
	//������������� ������ �����������(�� ��������� - ������)
	cout.fill('$');
	//���� �������������� ��� ������� ���� ����� ��������� �� ������ ����,
	//����� � �� �������. ���������� ����������� ��������� �����������
	cout.setf(ios::internal);
	cout << negative_int << endl;

	//������������� ������ ���� ������
	cout.width(50);
	//������������� ������ �����������(�� ��������� - ������)
	cout.fill('/');
	//����������� �� ������� ���� ����
	cout.setf(ios::right);
	cout << _char << endl;

	//P.S. ����� left, right � internal �� ����� ���� ����������� ������������.

	 //======== ������� � ������ �������� ���������� ========\\

	cout << "�������� � ����� �������� ��������\n";
	//������������ ������� ���������
	cout.flags(ios::oct);
	cout << _int << endl;

	//���������� ������� ���������
	cout.flags(ios::dec);
	cout << _int << endl;

	//����������������� ������� ���������
	cout.flags(ios::hex);
	cout << _int << endl;

	//������ ��������� ������� ��������� (8, 16, 10 ��� 0)
	//�� ��������� 0 - ��� ����������, ����� �������, ����� �������� 8- ���
	//16-������ �����. ����� � ������� ��������� 8
	cout << setbase(8) << " " << _int << endl;

	//P.S. ����� dec, oct � hex �� ����� ���� ����������� ������������.

	 //======== ������� ������������ ����� ========\\

	cout << "\n�������� ���� �����\n";
	//��� ������ ������������ ����� �������� ���������� ����� � ������� �����
	cout.flags(ios::showpoint);
	cout << zero_float << endl;

	//�������� ������������ ����� � ����� �������� � ��������
	cout.flags(ios::scientific);
	cout << _double << endl;

	//�������� ������������ ����� � ����� � ������������� ������,
	//�������� ���������� ������� ���� � setprecision
	cout.flags(ios::fixed);
	cout << setprecision(2) << _double << endl;

	//P.S. ����� scientific � fixed �� ����� ���� ����������� ������������

	 //======== �������� ����� ========\\

	cout << "\n������� �����\n";
	//�������� ���� ��� ������ ������������� �����
	cout.flags(ios::showpos);
	cout << _int << endl;

	system("pause");
	return 0;
}