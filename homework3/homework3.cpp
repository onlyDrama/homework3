#include "N1.h"
#include "N2.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include "ErrorL.h"
#include "ERRORCONST.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << getError_with_recomendation(2);
	int n = 1000;
	cout << "0 - Конец программы" << endl;
	while (n != 0)
	{
		cin >> n;

		if (n == 1)
		{
			double s, n, p;
			cout << "Задание 1" << endl;
			cout << "Введите s - Сумма кредита : " << endl;
			cin >> s;
			cout << "Введите n - количество месяцев : " << endl;
			cin >> n;
			cout << "Введите p - %: " << endl;
			cin >> p;
			if (n1(s, n, p) == ERRORCONST)
			{
				cout << getError();
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
			if (n2(s, n, m) == ERRORCONST)
			{
				cout << getError();
			}
			else
			{
				cout << "Результат : " << n2(s, n, m) << " %" << endl;
			}

		}


		if (n == 3)
		{
			cout << "Working on that case" << endl;
		}
		if (n == 4)
		{
			/*
			ifstream fin("txt.txt");
			if (!fin)
			{
				cout << "ERROR" << endl;
			}
			else
			{
				for (int i = 0; i < 10; i++)
				{
					int n[90];
					fin >> n[i];
					if (int(n[i]))
					{
						cout << n[i] << endl;
					}
				}
			}
			*/
			if (n == 5)
			{
				break;
			}
		}
	}
	return 0;
}
