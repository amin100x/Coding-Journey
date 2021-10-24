// Gu Sa A 
/*
42%24=18
24%18=6
18%6=0 jyare 0 ave tyare last jenathi divide karie ej gusaA hoy */

#include<iostream>
using namespace std;

int gsa(int a, int b)
{
    while (b!=0)
    {
        int rem= a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()

{
    int a,b;
    cin>>a>>b;
    cout<<gsa(a,b);
}