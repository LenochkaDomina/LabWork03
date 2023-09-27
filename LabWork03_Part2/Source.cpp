/*
*
*Date: 25/09/2023
*Author: Domina Olena
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

	cout << "Працюємо з вирівнюванням\n";
	//устанавливаем ширину поля вывода
	cout.width(20);
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	cout.fill('$');
	//флаг форматирования при котором знак числа выводится по левому краю,
	//число — по правому. Промежуток заполняется символами заполнителя
	cout.setf(ios::internal);
	cout << negative_int << endl;

	//устанавливаем ширину поля вывода
	cout.width(50);
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	cout.fill('/');
	//выравниваем по правому краю поля
	cout.setf(ios::right);
	cout << _char << endl;

	//P.S. флаги left, right и internal не могут быть установлены одновременно.

	 //======== выводим в разных системах исчисления ========\\

	cout << "Виводимо в різних системах числення\n";
	//восьмеричная система счисления
	cout.flags(ios::oct);
	cout << _int << endl;

	//десятичная система счисления
	cout.flags(ios::dec);
	cout << _int << endl;

	//шестнадцатеричная система счисления
	cout.flags(ios::hex);
	cout << _int << endl;

	//задаем основание системы счисления (8, 16, 10 или 0)
	//по умолчанию 0 - это десятичное, кроме случаев, когда вводятся 8- или
	//16-ричные числа. Здесь к примеру основание 8
	cout << setbase(8) << " " << _int << endl;

	//P.S. флаги dec, oct и hex не могут быть установлены одновременно.

	 //======== выводим вещественные чисел ========\\

	cout << "\nВиводимо дійсні числа\n";
	//при выводе вещественных чисел печатаем десятичную точку и дробную часть
	cout.flags(ios::showpoint);
	cout << zero_float << endl;

	//печатаем вещественные числа в форме мантиссы с порядком
	cout.flags(ios::scientific);
	cout << _double << endl;

	//Печатаем вещественные числа в форме с фиксированной точкой,
	//точность определяем строкой ниже в setprecision
	cout.flags(ios::fixed);
	cout << setprecision(2) << _double << endl;

	//P.S. флаги scientific и fixed не могут быть установлены одновременно

	 //======== печатаем знаки ========\\

	cout << "\nДрукуємо знаки\n";
	//печатаем знак при выводе положительных чисел
	cout.flags(ios::showpos);
	cout << _int << endl;

	system("pause");
	return 0;
}
