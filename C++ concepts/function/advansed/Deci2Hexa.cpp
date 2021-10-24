#include <iostream>
using namespace std;

void deci2hexa(int num)
{
    //charecter array for store hexadecimal reminder
    char hexa[100];
    //conunter for hexa number
    int i = 0;
    while (num > 0)
    {
        //temporary variable for store reminder
        int temp = 0;
        //storing reminder in temp
        temp = num % 16;
        //check if temp<10
        if (temp < 10)
        {
            hexa[i] = temp + 48;
            i++;
        }
        else
        {
            hexa[i] = temp + 55;
            i++;
        }
        num /= 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexa[j];
    }
}
int main()
{
    int n;
    cin >> n;
    deci2hexa(n);
}