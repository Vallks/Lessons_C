﻿/*Для вычисления наибольшего общего делителя двух чисел (НОД) можно использовать алгоритм Евклида:
Словами этот рекурсивный алгоритм можно выразить так: для того, что бы найти НОД двух чисел a и b, необходимо их сравнить. Если a равно b, то НОД равен a. 
Если же одно из чисел больше другого, то нужно из большего вычесть меньшее, и повторно применить этот алгоритм к разности и меньшему из чисел. Процесс завершается, когда числа становятся равными.

Реализовать алгоритм Евклида для определения наибольшего общего делителя двух целых чисел.

В функции main() вводятся два числа и вызывается функция nod() для вычисления наибольшего общего делителя. Результат выводится на консоль.*/
#include <iostream>
using namespace std;

int nod(int a, int b)
{
    if (a == b)
    {
        return a;
    }

    if (a < b)
    {
        return nod(a, b - a);
    }
    else
    {
        return nod(a - b, b);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << nod(a, b);
    return 0;
}