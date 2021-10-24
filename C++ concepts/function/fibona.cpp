#include <iostream>
using namespace std;

void fibo(int n)
{

    int a = 0, b = 1, nextTerm, i;

    for (i = 1; i <= n; i++)
    {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}
int main()
{
    int n;
    cin >> n;
    fibo(n);
}
