#include <iostream>
using namespace std;

int facto(int n)
{
    int fact = 1, i;
    for (i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, r;
    cout << "Enter n:-";
    cin >> n;
    cout << "Enter r:-";
    cin >> r;

    float ans = facto(n) / (facto(r) * facto(n - r));
    cout << ans;

    return 0;
}