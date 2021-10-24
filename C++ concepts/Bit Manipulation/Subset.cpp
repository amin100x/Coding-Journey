#include <iostream>
using namespace std;

void Subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)  //(1<<n) karvani 2^n made
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Subset(arr, 5);
}

//very good question and logic to it on notebook with take some values of i and j