// In the name of God !
//
//
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	double a, b, c, delta, x1, x2;
	cout << "ax^2 + bx + c = 0" << endl;
	cout << "Enter the coefficients!" << endl;
	cout << "a :";
	cin >> a;
	cout << "b :";
	cin >> b;
	cout << "c :";
	cin >> c;
	delta = pow(b, 2) - 4 * a*c;
	x1 = (-b + sqrt(delta)) / (a * 2);
	x2 = (-b - sqrt(delta)) / (a * 2);
	if (delta > 0)
	{
		cout << "The equation has two roots:" << endl;
		cout << x1 << " and " << x2 << endl;
	}
	else if (delta == 0)
	{
		cout << "The equation has one root:" << endl;
		cout << x1 << endl;
	}
	else if (delta < 0)
		cout << "The equation has NO root!" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\