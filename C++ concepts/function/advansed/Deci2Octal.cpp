#include <iostream>
using namespace std;

int Decioct(int num)
{
    int octal = 0;
    int i = 1;

    while (num > 0)
    {
        octal += (num % 8) * i;
        i *= 10;
        num /= 8;
    }
    return octal;
}
int main()
{
    int n;
    cin >> n;
    cout << Decioct(n);
    return 0;
}