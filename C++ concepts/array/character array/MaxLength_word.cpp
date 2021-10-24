
//find Max lenge of word in sentence

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore(); //here we come integer to char and we have to input sentence

    char arr[n + 1];        //1 extra for '\0'
    cin.getline(arr, n); //akho sentence input leva
    cin.ignore();

    int i = 0, currlen = 0, maxlen = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
            }
            currlen = 0;
        }
        else
        {
            currlen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;

    
}