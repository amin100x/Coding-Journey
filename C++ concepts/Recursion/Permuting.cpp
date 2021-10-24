//Permutation of a String

#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

void permutation(string s, int index)
{
    if (index>= s.size())
    {
        cout<<s<<endl;
        return;
    }
    
    for(int i=index; i<s.size() ; i++)
    {
        swap(s[index], s[i]);
        permutation(s, index+1);

        //back traking
        swap(s[index], s[i]);
    }
}
int main()
{
    cout<<"Enter string:- ";
    string str;
    cin>>str;

    cout<<"print permuting ";
    permutation(str, 0);
}