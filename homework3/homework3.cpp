#include "N1.h"
#include "N2.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include "ErrorL.h"
#include "ERRORCONST.h"
#include "Copyfile.h"
#include <windows.h>
#include "N4.h"
#include "BubbleSort.h"
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
			cout << "On work\n";
			/*double s, n, m;
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
		*/
		}
		if (n == 3)
		{
			string fn = "D:\\file1\\t.txt";
			string to = "C:\\file2";
			copyFile(fn, to);

		}
		if (n == 4)
		{
			string file_name = "D:\\file1\\t.txt";
			printinfo(file_name);
		}
		if (n == 5)
		{
			
		}
	}
	return 0;
}
