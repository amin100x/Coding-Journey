// print the speling of number

#include<iostream>
using namespace std;

void Speling( int n, string str[])
{
if (n==0)
{
    return;
}

Speling(n/10, str);
cout<<str[n%10]<<" ";

}
int main()
{
    int n;
    cin>>n;
    string str[]={"zore"," one"," two" , "three", "four" , "five", "six", "seven", "eight", "nine"};
    Speling(n, str);
}