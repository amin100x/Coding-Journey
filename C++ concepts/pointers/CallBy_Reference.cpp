#include <iostream>
using namespace std;

void callByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 20, b = 30;
    callByReference(&a, &b);
    cout << a << endl
         << b;
}