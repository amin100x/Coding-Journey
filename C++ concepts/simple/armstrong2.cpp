#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 1; i <= 1000; i++)
    {
        int x = i;
        int sum = 0;

        while (x > 0)
        {
            int rem = x % 10;
            sum = sum + rem * rem * rem;
            x = x / 10;
        }
        if (sum == i)
        {
            cout << i << "\n";
        }
    }

    return 0;
}