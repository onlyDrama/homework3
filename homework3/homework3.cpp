#include "N1.h"
#include "N2.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n = 1000;
	cout << "0 - Конец программы" << endl;
	while (n != 0)
	{
		cin >> n;
		if (n == 1)
		{
			double s, n, p;
			cout << "Задание 1" << endl;
			cout << "Введите s: " << endl;
			cin >> s;
			cout << "Введите n: " << endl;
			cin >> n;
			cout << "Введите p: " << endl;
			cin >> p;
			if (n1(s, n, p) == 404)
			{
				cout << "Скоро тут будет функция, вызывающая ошибку, взятая из другого проекта" << endl;
			}
			else
			{

				cout << "\nМесячная выплата: " << n1(s, n, p) << endl;
			}


		}


		if (n == 2)
		{
			double s, n, m;
			cout << "№3" << endl;
			cout << "s : ";
			cin >> s;
			cout << endl;
			cout << "n : ";
			cin >> n;
			cout << endl;
			cout << "m : ";
			cin >> m;
			cout << endl;
			if (n2(s, n, m) == 404)
			{
				cout << "Ошибка точно скоро будет" << endl;
			}
			else
			{
				cout << "Результат : " << n2(s, n, m) << endl;
			}

		}
		if (n == 3)
		{

		}
	}
	return 0;
}
