﻿/*Сформируйте массив из 7 элементов, организовав ввод данных с консоли.

Определите первый максимальный  из числа элементов, расположенных на нечетных (для пользователя) местах.  Замените этот элемент нулем.

Выведите преобразованный массив на консоль, отделяя элементы пробелом. Пробел должен быть и в конце массива.*/
#include <iostream>

int main()
{
    const int SIZE = 7;
    int ar[SIZE];
	int max = 0;

	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> ar[i];
		if (ar[i] > ar[max] && i % 2 ==0)
		{
			max = i;
		}
	}

	ar[max] = 0;

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << ar[i] << " ";
	}

	return 0;
}
