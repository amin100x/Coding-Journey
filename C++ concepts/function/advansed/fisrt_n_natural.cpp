#include<iostream>
using namespace std;

int sum(int num)
{
    int i, s=0;
    for ( i = 1; i <=num; i++)
    {
        s=s+i;
       
    }
     return s;
}

int main()
{
int n;
cin>>n;
cout<<sum(n);
}

