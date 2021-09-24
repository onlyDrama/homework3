#include "ERRORCONST.h"

double n2(double s, double n, double m)
{
    double p;
    n = n / 12;
    p = (((12 * n - 1) / s) * 100) + 0.1;

    if (p > 100)
    {
        return ERRORCONST;
    }
    else
    {
        p = p * 10;
        return p;
    }
}