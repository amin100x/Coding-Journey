#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int mx = -9998855; //vadhu nana mate
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
}