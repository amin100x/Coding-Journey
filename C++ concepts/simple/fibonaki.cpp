//fibonaki starting from 0 and 1

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;

if (n==1)
{
    cout<<"0\n";
}
else if(n==1){
cout<<"0 1\n";
}
else{
    int a=0, b=1, c, i=3;
    cout<<a<<" "<<b<<" ";
    while (i<=n)
    {
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
       i++;
    }
    cout<<"\n";
}
return 0;
}