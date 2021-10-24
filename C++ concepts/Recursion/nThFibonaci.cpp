#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1) // jo n=0 ke n= 1 thai jay to te return kari devu
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

/*............ bast type acc. T.C for fibo MAMOSitoin techniqe ...........*/

int f[10]; // koi moti size no globar araay lai levano
int fibo2(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
        {
            f[n - 2] = fibo2(n - 2);
        }
        if (f[n - 1] == -1)
        {
            f[n - 1] = fibo2(n - 1);
        }
        return f[n - 2] + f[n - 1];
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    //2nd type mate
    for (int i = 0; i < 10; i++)
    {
        f[i] = -1;
    }
    cout << fibo2(10);
}
