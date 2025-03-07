﻿/*Напишите функцию, которая в двумерном  массиве вещественных чисел меняет знак элементов некоторого столбца на противоположный (номер столбца с точки зрения пользователя передавать в качестве параметра). 
Если полученный в функцию номер неверный (например, больше существующего количества столбцов или отрицательный), то массив не должен измениться.

Также напишите функции ввода двумерного массива и его вывода на консоль в виде таблицы (элементы округляются до двух знаков после десятичной точки и отделяются знаками табуляции в строках).

В функции main() продемонстрируйте использование этих функций для двумерного массива размером 4 строки на 5 столбцов. 
Введите массив, а затем номер столбца. Измените знак всех элементов этого столбца на противоположный, а затем выведите преобразованный массив на консоль.*/
#include <iostream>
#include <iomanip>

using namespace std;

void read(double* ar, int N)
{
	for (int i = 0; i < N; i++, ar++)
	{
		cin >> *ar;
	}
	return;
}

void print(double* ar, int R, int C)
{

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++, ar++)
		{
			cout << fixed << setprecision(2) << *ar << "\t";
		}
		cout << endl;
	}
	cout << endl;

	return;
}

void zamena(double* ar, int R, int C, int N)
{
	if (N <= C && N > 0)
	{

		ar = ar + N - 1;

		for (int i = 0; i < R; i++)
		{
			*ar = -*ar;
			ar += C;
		}
	}

	return;
}

int main() {
	const int R = 4;
	const int C = 5;
	int n;
	double ar[R][C];
	
	read(ar[0], R * C);
	
	cin >> n;

	zamena(ar[0], R, C, n);

	print(ar[0], R, C);

	return 0;
}
