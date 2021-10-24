#include<bits/stdc++.h>
using namespace std;

int hexaToDeci(string num)
{
    int ans=0, i;
    int x=1;
    int s=num.size();

    for ( i = s-1; i >=0 ; i--)
    {
       if (num[i]>= '0' && num[i]<= '9')
       {
           ans+= x*(num[i]-'0');
       }
       else if (num[i]>= 'A' && num[i]<='F')
       {
           ans+= x*(num[i]- 'A' + 10);
       }
       x*= 16;
       
    }
    return ans;
}
int main()
{
    string n;
    cin>>n;
    cout<<hexaToDeci(n);
}