#include "N1.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n = 1000;
	cin >> n;
	if (n == 1)
	{
		int s, n, p;
		
		cout << "Введите s: " << endl;
		cin >> s;
		cout << "Введите n: " << endl;
		cin >> n;
		cout << "Введите p: " << endl;
		cin >> p;
		cout << "\nМесячная выплата: " << n1(s, n, p) << endl;
	}

	return 0;
}
