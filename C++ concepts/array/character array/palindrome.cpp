//palindrome etle je word ne apde pachad thi lakhie toi main word jevo j speling ave
//Ex. nitin

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n+1];
    cin>>arr;

    bool check = true;

    for (int i = 0; i <n ; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "word is a palindrome" << endl;
    }
    else
    {
        cout << "word is not a palindrome" << endl;
    }
    return 0;
}