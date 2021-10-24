#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s= "MAHMADAMIN";
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    cout<<s<<endl;

// ,,,,,,,,,,,, we can change by assci values...  type 2

string a= "MSDHONI"; 

for (int i = 0; i <a.size(); i++)
{
     if (a[i]>= 'A' && a[i]<='Z')
     {
         a[i]+=32;
     }
     
}
cout<<a<<endl;
}