#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="mahmadamin";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    //                   type-2               //

string a= "msdhoni";
for (int i = 0; i < a.size(); i++)
{
    if (a[i]>='a' && a[i]<='z')
    {
        a[i]-=32;
    }
    
}
cout<<a;

}