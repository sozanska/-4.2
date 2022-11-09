// Lab_04_2.cpp
// Прізвище та ім'я автора
// Лабораторна робота №4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 4

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(12) << "y" << " |" << endl;
	cout << "------------------------" << endl;
	
	x = xp;
	while (x <= xk)
	{
		A = 1 + x;

		if (x <= 4)
			B = exp(log(2 + 2 * x) + 2 * x);
		else
			if (x > 7)
				B = 1 - 7 * x + x * x - 2 * pow(x, 3);
			else
				B = 1 / tan((1 + x) / 9) + 8 * x;

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(12) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "------------------------" << endl;
	
	return 0;
}