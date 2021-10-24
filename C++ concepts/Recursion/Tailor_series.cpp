/*
Tailor series e^x= 1+ 2^x/2! + 3^x/3! + ... n^x/n! */

#include <iostream>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
    {
        return 1;
    }
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

/*.................. Best type for tailor series ..............*/

double e2(int x1, int n1)
{
    static double s = 1;
    if (n1 == 0)
    {
        return s;
    }
    s = 1 + x1 * s / n1;
    return e2(x1, n1 - 1);
}

/*..................using Loop.........*/

double e3(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double det = 1;

    for (i=1; i<=n ; i++)
    {
        num = num * x;
        det = det * i;
        s = s + num / det;
    }
    return s;
}

int main()
{
    cout << e(1, 10) << endl;
    cout << e2(1, 10) <<endl;
    cout<< e3(1, 10);
}