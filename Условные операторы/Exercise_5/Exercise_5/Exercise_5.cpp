﻿#include <iostream>

using namespace std;

int main()
{
    int x, x1, x2, x3, x4, x5, x6, px5, px4, px3,px2,px1; 

    cin >> x;

    if (x < 100000 || x > 999999)
    {
        cout << "ERROR";

        return 0;
    }

    x6 = x % 10;
    px5 = x / 10;
    x5 = px5 % 10;
    px4 = px5 / 10;
    x4 = px4 % 10;
    px3 = px4 / 10;
    x3 = px3 % 10;
    px2 = px3 / 10;
    x2 = px2 % 10;
    px1 = px2 / 10;
    x1 = px1 % 10;

    if ((x6 + x5 + x4) == (x3 + x2 + x1))
    {
        cout << "YES";

        return 0;
    }

    cout << "NO";

    return 0;
}
