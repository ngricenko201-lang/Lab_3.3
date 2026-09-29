// Lab_03_3.cpp
// < Гриценко Нікіта >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= 0) // похила пряма
		y = -R * x / 6 - R;
	else
		if (0 < x && x <= R) // перша чверть кола
			y = -sqrt(pow(R, 2) - pow(x, 2));
		else
			if (R < x && x <= 2 * R) // друга чверть кола
				y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
			else
				y = R; // горизонтальна пряма

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
