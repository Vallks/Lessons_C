﻿/*Две команды студентов участвовали в олимпиаде по программированию. В первой команде было два человека, а во второй - четыре.

Баллы, которые набрал каждый студент, вводятся с консоли (сначала две оценки первой команды, а потом - четыре оценки второй).

В командном зачете сравниваются средние баллы каждой команды. Если средний балл первой команды больше, то нужно вывести слово "First",
если больше средний балл второй команды, то слово "Second", а если эти средние баллы равны - то слово "Draw".*/
#include <iostream>

using namespace std;

int main()
{
    int e1, e2, e3, e4, e5, e6;

    cin >> e1 >> e2 >> e3 >> e4 >> e5 >> e6;


    float result1, result2;

    result1 = (float)(e1 + e2) / 2;
    result2 = (float)(e5 + e6 + e3 + e4) / 4;

    if (result1 > result2)
        cout << "First";

    if (result2 > result1)
        cout << "Second";

    if (result2 == result1)
        cout << "Draw";

    return 0;
}