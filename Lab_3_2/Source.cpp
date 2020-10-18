//Lab_3_2.cpp
//Загдая Олега  
//Лабораторна робота № 3.2
//Розгалудження, задане формулою: функція з параметрами.
//Варіант 8

#include <iostream>

using namespace std;

int main()
{
	double x; // Вхідний аргумент
	double a; // Вхідний параметр
	double b; // Вхідний параметр
	double c; // Вхідний параметр
	double F; // Результат обчислення виразу

	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;
	cout << "x= "; cin >> x;
	// спосіб 1: розгалудження в скороченій формі
	if (c < 0 && a != 0)
		F = -1 * a * x * x;
	if (c > 0 && a == 0) 
		F = (a - x) / (c * x);
	if (!((c < 0 && a != 0) && (c > 0 && a == 0)))
		F = x / c;

	cout << endl;
	cout << "1) F = " << F << endl;

	//
	if (c < 0 && a != 0)
		F = -1 * a * x * x;
	else
		if (c > 0 && a == 0)
			F = (a - x) / (c * x);
		else
			F = x / c;
	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}