#include <math.h>
double n1(double s, double n, double p) // s - ����, m - �������� �������, n - ���������� ������� , p - �������
{
	n = n / 12;

	double r = p / 100;
	
	if (r != 0)
	{
		double m = (s * r * pow((1 + r), n)) / (12 * ((pow((1 + r), n) - 1)));
		return m;
	}
	else
	{
		return 404;
	}
}