#include <iostream>
#include <math.h>

using namespace std;

bool prime(int num)
{
    int i;
    for (i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b, j;
    cin >> a >> b;
    for (j = a; j < b; j++)
    {
        if (prime(j))
        {
            cout << j << endl;
        }
    }
}