#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        int current = 0;
        for (j = i; j < n; j++)
        {
            current += arr[j];
            cout << current << endl;
        }
    }

    return 0;
}