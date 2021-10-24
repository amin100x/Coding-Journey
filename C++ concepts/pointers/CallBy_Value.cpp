#include <iostream>
using namespace std;

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    callByValue(a, b);
    cout << a << endl
         << b;

    return 0;
}
