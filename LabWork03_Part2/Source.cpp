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

	//======== работаем с выравниванием ========\\

	cout << "ѕрацюЇмо з вир≥внюванн€м\n";
	//устанавливаем ширину пол€ вывода
	cout.width(20);
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	cout.fill('$');
	//флаг форматировани€ при котором знак числа выводитс€ по левому краю,
	//число Ч по правому. ѕромежуток заполн€етс€ символами заполнител€
	cout.setf(ios::internal);
	cout << negative_int << endl;

	//устанавливаем ширину пол€ вывода
	cout.width(50);
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	cout.fill('/');
	//выравниваем по правому краю пол€
	cout.setf(ios::right);
	cout << _char << endl;

	//P.S. флаги left, right и internal не могут быть установлены одновременно.

	 //======== выводим в разных системах исчислени€ ========\\

	cout << "¬иводимо в р≥зних системах численн€\n";
	//восьмерична€ система счислени€
	cout.flags(ios::oct);
	cout << _int << endl;

	//дес€тична€ система счислени€
	cout.flags(ios::dec);
	cout << _int << endl;

	//шестнадцатерична€ система счислени€
	cout.flags(ios::hex);
	cout << _int << endl;

	//задаем основание системы счислени€ (8, 16, 10 или 0)
	//по умолчанию 0 - это дес€тичное, кроме случаев, когда ввод€тс€ 8- или
	//16-ричные числа. «десь к примеру основание 8
	cout << setbase(8) << " " << _int << endl;

	//P.S. флаги dec, oct и hex не могут быть установлены одновременно.

	 //======== выводим вещественные чисел ========\\

	cout << "\n¬иводимо д≥йсн≥ числа\n";
	//при выводе вещественных чисел печатаем дес€тичную точку и дробную часть
	cout.flags(ios::showpoint);
	cout << zero_float << endl;

	//печатаем вещественные числа в форме мантиссы с пор€дком
	cout.flags(ios::scientific);
	cout << _double << endl;

	//ѕечатаем вещественные числа в форме с фиксированной точкой,
	//точность определ€ем строкой ниже в setprecision
	cout.flags(ios::fixed);
	cout << setprecision(2) << _double << endl;

	//P.S. флаги scientific и fixed не могут быть установлены одновременно

	 //======== печатаем знаки ========\\

	cout << "\nƒрукуЇмо знаки\n";
	//печатаем знак при выводе положительных чисел
	cout.flags(ios::showpos);
	cout << _int << endl;

	system("pause");
	return 0;
}