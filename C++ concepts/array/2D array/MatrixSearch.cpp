// matrix Must be Sorted for this code

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
    int n, m, i, j;
    cin >> n >> m;
    int arr[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cin >> key;

     int r = 0, c = m - 1;
    bool found = false;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == key)
        {
            found = true;
        }
     if (arr[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout<<"element found";
    }
    else
    {
 cout<<"element not found";
    }

    
}