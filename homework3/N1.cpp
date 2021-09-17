#include <math.h>
int n1( int s, int n, int p)
{
	double r = p / 100;
	double m = (s * r * pow((1 + r), n)) / (12 * ((pow((1 + r), n) - 1)));
	return m;
}