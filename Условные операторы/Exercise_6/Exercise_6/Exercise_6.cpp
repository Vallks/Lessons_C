﻿/* Грузовой самолет должен пролететь с грузом из пункта А в пункт С через пункт В. Емкость бака для топлива у самолета – 300 литров. Из пункта A самолет вылетает с полным баком. Потребление топлива на 1 км в зависимости от веса груза у самолета следующее:

          -  до 500 кг  включительно (интервал [0, 500]) :    1 литров / км

          - до 1000 кг включительно (интервал (500, 1000]):   4 литров / км

          - до 1500 кг включительно (интервал (1000, 1500]):   7 литров / км

          - до 2000 кг включительно (интервал (1500,2000]):   9 литров / км.

          - более 2000 кг – самолет не поднимает. Следует вывести "ERROR".

Пользователь вводит расстояние между пунктами А и В,  расстояние между пунктами В и С, а также вес груза. Программа должна рассчитать какое минимальное количество топлива необходимо для дозаправки самолету в пункте В, чтобы долететь из пункта А в пункт С. В случае невозможности преодолеть любое из расстояний – программа должна вывести ERROR.

Числовой результат работы программы округляется до двух знаков после десятичной точки.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, v;

    const int tank = 300;

    cin >> a >> b >> v;

    int expenditure = 1;

    if (v > 2000)
    {
        cout << "ERROR";
        return 0;
    }

    if (v >= 1500 && v <= 2000)
    {
        expenditure = 9;
    }

    if (v >= 1000 && v <= 1500)
    {
        expenditure = 7;
    }

    if (v > 500 && v <= 1000)
    {
        expenditure = 4;
    }
    else
    {
        expenditure = 1;
    }

    int benz = a * expenditure;
    if (benz > tank)
    {
        cout << "ERROR";

        return 0;
    }

    benz = b * expenditure;
    if (benz > tank)
    {
        cout << "ERROR";

        return 0;
    }

    benz = (a + b) * expenditure;

    double dozapravka = benz - tank;

    if (dozapravka > tank)
    {
        cout << "ERROR";

        return 0;
    }
    
    if (dozapravka < 0)
    {
        cout << fixed << setprecision(2) << (double)0;
    }
    else
    {
        cout << fixed << setprecision(2) << dozapravka;
    }

    return 0;
}