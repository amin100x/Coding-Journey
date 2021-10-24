#include<iostream>
using namespace std;

void reverce(string s)
{

if (s.length()==0)
{
    return;
}
string ros= s.substr(1); // 1st charecter pachi ni akhi string bani jay
reverce(ros);
cout<<s[0];
}

int main()
{
reverce("amin");
}