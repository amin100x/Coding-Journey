#include <iostream>
using namespace std;

int main()
{

    int i, n;
    cin >> n;

    bool flag = true;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n <= 1)
    {
        flag = false;
    }
    if (flag)
    {
        cout << "prime \n";
    }
    else
    {
        cout << "not prime\n";
    }
    return 0;
}