﻿/*Введите значения двух вещественных чисел и вычислите их произведение. Вывод нужно оформить в виде числа с фиксированной точкой, причем в дробной части выводится 3 десятичных знака.

При отладке примера в Visual Studio используйте для ввода и вывода функции scanf_s() и printf().

При вводе текста программы в окно проверки:

a) не забудьте подключить заголовочный файл <stdio.h> (В Visial studio это происходит автоматически, здесь нет)

б) замените функцию scanf_s() на функцию scanf() (Из-за особенностей используемого компилятора С++ )*/
#include <iostream>
#include <stdio.h>


int main()
{
    double a, b;
    scanf_s("%lf%lf", &a, &b);
    printf("%.3f", a * b);
    return 0;
}
