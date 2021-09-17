int n2(double s, double n, double m)
{
    double p;
    n = n / 12;
    p = (((12 * n - 1) / s) * 100);

    if (p > 100)
    {
        return 404;
    }
    else
    {
        p = p * 10;
        return p;
    }
}