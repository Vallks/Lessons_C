﻿/*Напишите функцию, которая в целом неотрицательном числе  переставляет цифры в обратном порядке. Т.е., например, число 123 превращает в 321. А число 4012 - в число 2104. 

В функции main имеется заготовка с вызовом этой функции. Вводится число, затем идет вызов функции с именем transform (которую нужно реализовать), а затем - вывод измененного числа на консоль.*/
#include<iostream>
using namespace std;

void transform(int&);

int main() {
	int a;
	cin >> a;
	transform(a);
	cout << a;
	return 0;
}

void transform(int& a)
{
	int c,b = 0, x = 10,y = 1;

	while (a / x > 0)
	{
		y *= 10;
		x *= 10;
	}

	x = 1;

	while (a / x > 0)
	{
		c = a/x % 10;
		b += c * y;
		x *= 10;
		y /= 10;
	}
	a = b;

	return;
}
